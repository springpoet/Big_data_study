namespace HelloCSharp06
{
    partial class Form1
    {
        /// <summary>
        /// 필수 디자이너 변수입니다.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 사용 중인 모든 리소스를 정리합니다.
        /// </summary>
        /// <param name="disposing">관리되는 리소스를 삭제해야 하면 true이고, 그렇지 않으면 false입니다.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form 디자이너에서 생성한 코드

        /// <summary>
        /// 디자이너 지원에 필요한 메서드입니다. 
        /// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
        /// </summary>
        private void InitializeComponent()
        {
            this.button1 = new System.Windows.Forms.Button();
            this.q_column = new System.Windows.Forms.TextBox();
            this.q_width = new System.Windows.Forms.TextBox();
            this.R_width = new System.Windows.Forms.Label();
            this.R_height = new System.Windows.Forms.Label();
            this.label1 = new System.Windows.Forms.Label();
            this.q_height = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.q_r = new System.Windows.Forms.TextBox();
            this.button2 = new System.Windows.Forms.Button();
            this.button3 = new System.Windows.Forms.Button();
            this.button4 = new System.Windows.Forms.Button();
            this.button5 = new System.Windows.Forms.Button();
            this.rect_area = new System.Windows.Forms.Label();
            this.circle_length = new System.Windows.Forms.Label();
            this.circle_area = new System.Windows.Forms.Label();
            this.cuvoid_volume = new System.Windows.Forms.Label();
            this.circle_volume = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(182, 42);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(108, 53);
            this.button1.TabIndex = 0;
            this.button1.Text = "직사각형 넓이";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // q_column
            // 
            this.q_column.Location = new System.Drawing.Point(56, 77);
            this.q_column.Name = "q_column";
            this.q_column.Size = new System.Drawing.Size(100, 21);
            this.q_column.TabIndex = 1;
            // 
            // q_width
            // 
            this.q_width.Location = new System.Drawing.Point(56, 42);
            this.q_width.Name = "q_width";
            this.q_width.Size = new System.Drawing.Size(100, 21);
            this.q_width.TabIndex = 2;
            // 
            // R_width
            // 
            this.R_width.AutoSize = true;
            this.R_width.Location = new System.Drawing.Point(3, 45);
            this.R_width.Name = "R_width";
            this.R_width.Size = new System.Drawing.Size(29, 12);
            this.R_width.TabIndex = 3;
            this.R_width.Text = "가로";
            // 
            // R_height
            // 
            this.R_height.AutoSize = true;
            this.R_height.Location = new System.Drawing.Point(3, 77);
            this.R_height.Name = "R_height";
            this.R_height.Size = new System.Drawing.Size(29, 12);
            this.R_height.TabIndex = 4;
            this.R_height.Text = "세로";
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(3, 116);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(29, 12);
            this.label1.TabIndex = 5;
            this.label1.Text = "높이";
            // 
            // q_height
            // 
            this.q_height.Location = new System.Drawing.Point(56, 116);
            this.q_height.Name = "q_height";
            this.q_height.Size = new System.Drawing.Size(100, 21);
            this.q_height.TabIndex = 6;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(5, 151);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(41, 12);
            this.label2.TabIndex = 7;
            this.label2.Text = "반지름";
            // 
            // q_r
            // 
            this.q_r.Location = new System.Drawing.Point(56, 148);
            this.q_r.Name = "q_r";
            this.q_r.Size = new System.Drawing.Size(100, 21);
            this.q_r.TabIndex = 8;
            // 
            // button2
            // 
            this.button2.Location = new System.Drawing.Point(182, 110);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(108, 53);
            this.button2.TabIndex = 0;
            this.button2.Text = "원의 둘레";
            this.button2.UseVisualStyleBackColor = true;
            this.button2.Click += new System.EventHandler(this.button2_Click);
            // 
            // button3
            // 
            this.button3.Location = new System.Drawing.Point(182, 184);
            this.button3.Name = "button3";
            this.button3.Size = new System.Drawing.Size(108, 53);
            this.button3.TabIndex = 0;
            this.button3.Text = "원의 넓이";
            this.button3.UseVisualStyleBackColor = true;
            this.button3.Click += new System.EventHandler(this.button3_Click);
            // 
            // button4
            // 
            this.button4.Location = new System.Drawing.Point(182, 258);
            this.button4.Name = "button4";
            this.button4.Size = new System.Drawing.Size(108, 53);
            this.button4.TabIndex = 0;
            this.button4.Text = "직사각형 부피";
            this.button4.UseVisualStyleBackColor = true;
            this.button4.Click += new System.EventHandler(this.button4_Click);
            // 
            // button5
            // 
            this.button5.Location = new System.Drawing.Point(182, 340);
            this.button5.Name = "button5";
            this.button5.Size = new System.Drawing.Size(108, 53);
            this.button5.TabIndex = 0;
            this.button5.Text = "원의 부피";
            this.button5.UseVisualStyleBackColor = true;
            this.button5.Click += new System.EventHandler(this.button5_Click);
            // 
            // rect_area
            // 
            this.rect_area.AutoSize = true;
            this.rect_area.Location = new System.Drawing.Point(335, 62);
            this.rect_area.Name = "rect_area";
            this.rect_area.Size = new System.Drawing.Size(97, 12);
            this.rect_area.TabIndex = 9;
            this.rect_area.Text = "직사각형 넓이 값";
            // 
            // circle_length
            // 
            this.circle_length.AutoSize = true;
            this.circle_length.Location = new System.Drawing.Point(335, 130);
            this.circle_length.Name = "circle_length";
            this.circle_length.Size = new System.Drawing.Size(73, 12);
            this.circle_length.TabIndex = 9;
            this.circle_length.Text = "원의 둘레 값";
            // 
            // circle_area
            // 
            this.circle_area.AutoSize = true;
            this.circle_area.Location = new System.Drawing.Point(335, 204);
            this.circle_area.Name = "circle_area";
            this.circle_area.Size = new System.Drawing.Size(73, 12);
            this.circle_area.TabIndex = 9;
            this.circle_area.Text = "원의 넓이 값";
            // 
            // cuvoid_volume
            // 
            this.cuvoid_volume.AutoSize = true;
            this.cuvoid_volume.Location = new System.Drawing.Point(335, 278);
            this.cuvoid_volume.Name = "cuvoid_volume";
            this.cuvoid_volume.Size = new System.Drawing.Size(97, 12);
            this.cuvoid_volume.TabIndex = 9;
            this.cuvoid_volume.Text = "직사각형 부피 값";
            // 
            // circle_volume
            // 
            this.circle_volume.AutoSize = true;
            this.circle_volume.Location = new System.Drawing.Point(335, 360);
            this.circle_volume.Name = "circle_volume";
            this.circle_volume.Size = new System.Drawing.Size(73, 12);
            this.circle_volume.TabIndex = 9;
            this.circle_volume.Text = "원의 부피 값";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.circle_volume);
            this.Controls.Add(this.cuvoid_volume);
            this.Controls.Add(this.circle_area);
            this.Controls.Add(this.circle_length);
            this.Controls.Add(this.rect_area);
            this.Controls.Add(this.q_r);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.q_height);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.R_height);
            this.Controls.Add(this.R_width);
            this.Controls.Add(this.q_width);
            this.Controls.Add(this.q_column);
            this.Controls.Add(this.button5);
            this.Controls.Add(this.button4);
            this.Controls.Add(this.button3);
            this.Controls.Add(this.button2);
            this.Controls.Add(this.button1);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.TextBox q_column;
        private System.Windows.Forms.TextBox q_width;
        private System.Windows.Forms.Label R_width;
        private System.Windows.Forms.Label R_height;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox q_height;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox q_r;
        private System.Windows.Forms.Button button2;
        private System.Windows.Forms.Button button3;
        private System.Windows.Forms.Button button4;
        private System.Windows.Forms.Button button5;
        private System.Windows.Forms.Label rect_area;
        private System.Windows.Forms.Label circle_length;
        private System.Windows.Forms.Label circle_area;
        private System.Windows.Forms.Label cuvoid_volume;
        private System.Windows.Forms.Label circle_volume;
    }
}

