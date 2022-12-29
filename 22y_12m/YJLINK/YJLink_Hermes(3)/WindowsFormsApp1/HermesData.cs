using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Linq;

namespace WindowsFormsApp1
{

    public struct ServiceDesc
    {
        public string m_machineId;
        public int m_laneId;
        public string m_version;
    }

    public struct MachineInfo
    {
        public string m_machineId;
        public int m_laneId;
        public string m_interfaceId;
        public string m_version;
        public string m_address;
        public int m_port;
        public bool m_bCheckAliveResponse;
        public bool m_bBoardForecast;
        public bool m_bQuaryBoardInfo;
        public bool m_bSendBoardInfo;
    }

    public struct Notification
    {
        public int m_code;
        public int m_severity;
        public string m_desc;
    }

    public struct BoardInfo
    {
        public string m_boardId;
        public string m_boardIdCreatedMachine;
        public int m_failedBoard;
        public string m_productTypeId;
        public int m_flippedBoard;
        public string m_topBarcode;
        public string m_botBorcode;
        public double? m_length;
        public double? m_width;
        public double? m_thickness;
        public double? m_conveyorSpeed;
        public double? m_topClearance;
        public double? m_botClearance;
        public double? m_weight;
        public int m_transferState;
        //public string m_forcastId;
        public string m_forecastId;
    }
}
