using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp08_01
{
    public class Notifier : ISubject
    {
        private List<IObserver> observers=new List<IObserver>();

        public void notify(string msg)
        {
            foreach (IObserver observer in observers)
            {
                observer.update(msg);
            }
            //throw new NotImplementedException();
        }

        public void register(IObserver o)
        {
            observers.Add(o);
            //throw new NotImplementedException();
        }

        public void unregister(IObserver o)
        {
            observers.Remove(o);
            //throw new NotImplementedException();
        }
    }
}
