using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HermesState
{
    public enum KState { OFF, ON, CLEAR }

    public enum NotificationCode
    {
        Protocol_error = 1,
        Connection_refused,
        Connection_reset,
        Configuration_error,
        Machine_shutdown,
        BoardForecast_error
    }
    public enum Severity
    {
        Fatal_Error = 1,
        Error,
        Warning,
        Info
    }
}
