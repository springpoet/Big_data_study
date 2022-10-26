//window.addEventListener('load', function(){});
//document.addEventListener('DOMContentLoaded', function(){})
window.addEventListener("load", function () {
  //const sounds = $('audio') //오디오태그들
  const sounds = document.querySelectorAll("audio");
  //const pads = $('.pads div') //pads 안에 있는 div들
  const pads = document.querySelectorAll(".pads div");
  //const visual = $('.visual')
  const visual = document.querySelector(".visual");

  //const title = $('.title')
  const title = document.querySelector(".title");
  //pad1~pad6의 색상을 담는 배열
  const colors = ["red", "orange", "yellow", "green", "blue", "plum"];
  //음악 재생이 끝났을 경우
  // sounds.each(function(index,soundFile) {
  //     soundFile.onended = function() {
  //         visual.text('')
  //         title.text('')
  //     }
  // })
  sounds.forEach(function (soundFile) {
    soundFile.onended = function () {
      visual.innerHTML = "";
      title.innerHTML = "";
    };
  });

  pads.forEach(function (pad, index) {
    pad.addEventListener("click", function () {
      sounds.forEach(function (inx) {
        inx.pause();
      });
      if (sounds[index]) {
        sounds[index].currentTime = 0;
        sounds[index].play();
        const strArray = sounds[index].src.split("sound/");
        title.innerHTML = strArray[1].split(".")[0];
      }
      createBubbles(index);
    });
  });

  const createBubbles = function (index) {
    //visual.text('')
    visual.innerHTML = "";
    //css에서 적용될 div태그
    //const bubble = $('<div></div>')
    const bubble = document.createElement("div");
    //visual.append(bubble)
    visual.appendChild(bubble);
    bubble.style.backgroundColor = colors[index];
    bubble.style.top = "300px";
    bubble.style.animation = "animation 2000ms linear infinite both";
    // bubble.css('background', colors[index]).
    // css('top', '300px')
    // .css('animation',
    // 'animation 2000ms linear infinite both')
  };
});
