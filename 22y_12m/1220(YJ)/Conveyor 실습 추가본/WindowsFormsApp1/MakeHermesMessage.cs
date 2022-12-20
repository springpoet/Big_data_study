using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Linq;

namespace WindowsFormsApp1
{
    public static class MakeHermesMessage
    {
        static private List<string> m_logMsg = new List<string>();

        static private XElement GetRootNode()
        {
            //string header = "<?xml version=\"1.0\" encoding=\"utf-8\"?>";\
            XElement node = new XElement("Hermes", new XAttribute("Timestamp", DateTime.Now.ToString("yyyy-MM-ddTHH:mm:ss.fff")));
            return node;
        }


        static public string GetCheckAlive()
        {
            XElement node = GetRootNode();
            node.Add(new XElement("CheckAlive"));
            return node.ToString();
        }

        static public string GetServiceDesc(MachineInfo machineInfo)
        {
            try
            {
                XElement node = GetRootNode();

                XElement subNode = new XElement("ServiceDescription");

                Dictionary<string, string> value = new Dictionary<string, string>();
                value.Add("MachineId", machineInfo.m_machineId);
                value.Add("InterfaceId", machineInfo.m_interfaceId);
                value.Add("LaneId", machineInfo.m_laneId.ToString());
                value.Add("Version", machineInfo.m_version);

                subNode = MakeSubXmlNode(subNode, value);

                XElement featureNode = new XElement("SupportedFeatures");
                featureNode.Add(new XElement("FeatureBoardForecast"));
                //featureNode.Add(new XElement("FeatureQueryBoardInfo"));  최소 마지막 50장 정보를 저장해야 Enable 할 수 있음
                //featureNode.Add(new XElement("FeatureSendBoardInfo"));
                subNode.Add(featureNode);

                node.Add(subNode);
                return node.ToString();
            }
            catch (Exception e)
            {
                m_logMsg.Add(e.Message);
                return "";
            }

        }

        private static XElement MakeSubXmlNode(XElement subNode, Dictionary<string, string> value)
        {
            XAttribute attribute;
            foreach (var item in value)
            {
                if (item.Value != null)
                {
                    attribute = new XAttribute(item.Key, item.Value);
                    subNode.Add(attribute);
                }
            }

            return subNode;
        }

        static public string GetNotification(NotificationCode code, Severity severity, string desc)
        {
            try
            {
                XElement node = GetRootNode();

                XElement subNode = new XElement("Notification");

                Dictionary<string, string> value = new Dictionary<string, string>();
                value.Add("NotificationCode", ((int)code).ToString());
                value.Add("Severity", ((int)severity).ToString());
                value.Add("Description", desc);

                subNode = MakeSubXmlNode(subNode, value);

                node.Add(subNode);
                return node.ToString();
            }
            catch (Exception e)
            {
                m_logMsg.Add(e.Message);
                return "";
            }

        }

        public static void AddIfNotNull(this Dictionary<string, string> dic, string key, dynamic value)
        {
            if (value != null)
            {
                dic.Add(key, value.ToString());
            }
        }

        static public string GetMachineReady(string forecastId, BoardInfo boardInfo)
        {
            try
            {
                XElement node = GetRootNode();

                XElement subNode = new XElement("MachineReady");

                Dictionary<string, string> value = new Dictionary<string, string>();

                value.Add("FailedBoard", ((int)boardInfo.m_failedBoard).ToString());
                value.AddIfNotNull("ForecastId", forecastId);
                value.AddIfNotNull("BoardId", boardInfo.m_boardId);
                value.AddIfNotNull("ProductTypeId", boardInfo.m_productTypeId);
                value.AddIfNotNull("FlippedBoard", boardInfo.m_flippedBoard);
                value.AddIfNotNull("Length", boardInfo.m_length);
                value.AddIfNotNull("Width", boardInfo.m_width);
                value.AddIfNotNull("Thickness", boardInfo.m_thickness);
                value.AddIfNotNull("ConveyorSpeed", boardInfo.m_conveyorSpeed);
                value.AddIfNotNull("TopClearanceHeight", boardInfo.m_topClearance);
                value.AddIfNotNull("BottomClearanceHeight", boardInfo.m_botClearance);
                value.AddIfNotNull("Weight", boardInfo.m_weight);

                subNode = MakeSubXmlNode(subNode, value);
                node.Add(subNode);
                return node.ToString();
            }
            catch (Exception e)
            {
                m_logMsg.Add(e.Message);
                return "";
            }

        }

        static public string GetRevokeMachineReady()
        {
            XElement node = GetRootNode();
            node.Add(new XElement("RevokeMachineReady"));
            return node.ToString();
        }

        static public string GetBoardAvailable(BoardInfo boardInfo, bool bIdGeneration, string machineName)
        {
            try
            {
                XElement node = GetRootNode();

                XElement subNode = new XElement("BoardAvailable");

                if (bIdGeneration)
                {
                //    BoardData.getInstance().m_receiveBoardInfo.m_boardId = boardInfo.m_boardId = Guid.NewGuid().ToString();
                 //   BoardData.getInstance().m_receiveBoardInfo.m_boardIdCreatedMachine = boardInfo.m_boardIdCreatedMachine = machineName;
                }

                Dictionary<string, string> value = new Dictionary<string, string>();
                value.Add("BoardId", boardInfo.m_boardId);
                value.Add("BoardIdCreatedBy", boardInfo.m_boardIdCreatedMachine);
                value.Add("FailedBoard", boardInfo.m_failedBoard.ToString());
                value.AddIfNotNull("ProductTypeId", boardInfo.m_productTypeId);
                value.Add("FlippedBoard", boardInfo.m_flippedBoard.ToString());
                value.AddIfNotNull("TopBarcode", boardInfo.m_topBarcode);
                value.AddIfNotNull("BottomBarcode", boardInfo.m_botBorcode);
                value.AddIfNotNull("Length", boardInfo.m_length);
                value.AddIfNotNull("Width", boardInfo.m_width);
                value.AddIfNotNull("Thickness", boardInfo.m_thickness);
                value.AddIfNotNull("ConveyorSpeed", boardInfo.m_conveyorSpeed);
                value.AddIfNotNull("TopClearanceHeight", boardInfo.m_topClearance);
                value.AddIfNotNull("BottomClearanceHeight", boardInfo.m_botClearance);
                value.AddIfNotNull("Weight", boardInfo.m_weight);

                subNode = MakeSubXmlNode(subNode, value);

                node.Add(subNode);
                return node.ToString();
            }
            catch (Exception e)
            {
                m_logMsg.Add(e.Message);
                return "";
            }

        }

        static public string GetRevokeBoardAvailable()
        {
            XElement node = GetRootNode();
            node.Add(new XElement("RevokeBoardAvailable"));
            return node.ToString();
        }

        static public string GetStartTransport(string BoardId, double? conveyorSpeed = null)
        {
            try
            {
                XElement node = GetRootNode();

                XElement subNode = new XElement("StartTransport");

                Dictionary<string, string> value = new Dictionary<string, string>();
                value.Add("BoardId", BoardId);
                value.AddIfNotNull("ConveyorSpeed", conveyorSpeed);

                subNode = MakeSubXmlNode(subNode, value);

                node.Add(subNode);
                return node.ToString();
            }
            catch (Exception e)
            {
                m_logMsg.Add(e.Message);
                return "";
            }

        }

        static public string GetStopTrasnport(int transferState, string BoardId)
        {
            try
            {
                XElement node = GetRootNode();

                XElement subNode = new XElement("StopTransport");

                Dictionary<string, string> value = new Dictionary<string, string>();
                value.Add("TransferState", transferState.ToString());
                value.Add("BoardId", BoardId);

                subNode = MakeSubXmlNode(subNode, value);

                node.Add(subNode);
                return node.ToString();

            }
            catch (Exception e)
            {
                m_logMsg.Add(e.Message);
                return "";
            }

        }

        static public string GetTransportFinished(int transferState, string BoardId)
        {
            try
            {
                XElement node = GetRootNode();

                XElement subNode = new XElement("TransportFinished");

                Dictionary<string, string> value = new Dictionary<string, string>();
                value.Add("TransferState", transferState.ToString());
                value.Add("BoardId", BoardId);

                subNode = MakeSubXmlNode(subNode, value);

                node.Add(subNode);
                return node.ToString();
            }
            catch (Exception e)
            {
                m_logMsg.Add(e.Message);
                return "";
            }

        }

        static public string Hermes_GetBoardForecast(string forecastId, BoardInfo boardInfo, double? availableTime = null)
        {
            try
            {
                XElement node = GetRootNode();

                XElement subNode = new XElement("BoardForecast");

                Dictionary<string, string> value = new Dictionary<string, string>();
                value.AddIfNotNull("ForecastId", forecastId);
                value.AddIfNotNull("TimeUntilAvailable", availableTime);
                value.AddIfNotNull("BoardId", boardInfo.m_boardId);
                value.AddIfNotNull("BoardIdCreatedBy", boardInfo.m_boardIdCreatedMachine);
                value.Add("FailedBoard", boardInfo.m_failedBoard.ToString());
                value.AddIfNotNull("ProductTypeId", boardInfo.m_productTypeId);
                value.Add("FlippedBoard", boardInfo.m_flippedBoard.ToString());
                value.AddIfNotNull("TopBarcode", boardInfo.m_topBarcode);
                value.AddIfNotNull("BottomBarcode", boardInfo.m_botBorcode);
                value.AddIfNotNull("Length", boardInfo.m_length);
                value.AddIfNotNull("Width", boardInfo.m_width);
                value.AddIfNotNull("Thickness", boardInfo.m_thickness);
                value.AddIfNotNull("ConveyorSpeed", boardInfo.m_conveyorSpeed);
                value.AddIfNotNull("TopClearanceHeight", boardInfo.m_topClearance);
                value.AddIfNotNull("BottomClearanceHeight", boardInfo.m_botClearance);
                value.AddIfNotNull("Weight", boardInfo.m_weight);

                subNode = MakeSubXmlNode(subNode, value);

                node.Add(subNode);
                return node.ToString();

            }
            catch (Exception e)
            {
                m_logMsg.Add(e.Message);
                return "";
            }

        }

        static public string Hermes_GetQueryBoardInfo(string topBarcode, string botBarcode)
        {
            try
            {
                XElement node = GetRootNode();

                XElement subNode = new XElement("QueryBoardInfo");

                Dictionary<string, string> value = new Dictionary<string, string>();
                value.AddIfNotNull("TopBarcode", topBarcode);
                value.AddIfNotNull("BottomBarcode", botBarcode);

                subNode = MakeSubXmlNode(subNode, value);

                node.Add(subNode);
                return node.ToString();
            }
            catch (Exception e)
            {
                m_logMsg.Add(e.Message);
                return "";
            }

        }

        static public string Hermes_GetSendBoardInfo(BoardInfo boardInfo)
        {
            try
            {
                XElement node = GetRootNode();

                XElement subNode = new XElement("SendBoardInfo");

                Dictionary<string, string> value = new Dictionary<string, string>();
                value.AddIfNotNull("BoardId", boardInfo.m_boardId);
                value.AddIfNotNull("BoardIdCreatedBy", boardInfo.m_boardIdCreatedMachine);
                value.AddIfNotNull("FailedBoard", boardInfo.m_failedBoard);
                value.AddIfNotNull("ProductTypeId", boardInfo.m_productTypeId);
                value.AddIfNotNull("FlippedBoard", boardInfo.m_flippedBoard);
                value.AddIfNotNull("TopBarcode", boardInfo.m_topBarcode);
                value.AddIfNotNull("BottomBarcode", boardInfo.m_botBorcode);
                value.AddIfNotNull("Length", boardInfo.m_length);
                value.AddIfNotNull("Width", boardInfo.m_width);
                value.AddIfNotNull("Thickness", boardInfo.m_thickness);
                value.AddIfNotNull("TopClearanceHeight", boardInfo.m_topClearance);
                value.AddIfNotNull("BottomClearanceHeight", boardInfo.m_botClearance);

                subNode = MakeSubXmlNode(subNode, value);

                node.Add(subNode);
                return node.ToString();
            }
            catch (Exception e)
            {
                m_logMsg.Add(e.Message);
                return "";
            }

        }
    }
}
