namespace WindowsFormsApp1
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
            this.Conn_BTN = new System.Windows.Forms.Button();
            this.textBox1 = new System.Windows.Forms.TextBox();
            this.textBox2 = new System.Windows.Forms.TextBox();
            this.label4 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.richTextBox1 = new System.Windows.Forms.RichTextBox();
            this.ServiceDesc_BTN = new System.Windows.Forms.Button();
            this.MachineReady_BTN = new System.Windows.Forms.Button();
            this.RevokeMachine_BTN = new System.Windows.Forms.Button();
            this.StartTrans_BTN = new System.Windows.Forms.Button();
            this.StopTrans_BTN = new System.Windows.Forms.Button();
            this.NotiData_BTN = new System.Windows.Forms.Button();
            this.CheckAlive_BTN = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // Conn_BTN
            // 
            this.Conn_BTN.Location = new System.Drawing.Point(293, 40);
            this.Conn_BTN.Name = "Conn_BTN";
            this.Conn_BTN.Size = new System.Drawing.Size(83, 23);
            this.Conn_BTN.TabIndex = 0;
            this.Conn_BTN.Text = "Connect";
            this.Conn_BTN.UseVisualStyleBackColor = true;
            this.Conn_BTN.Click += new System.EventHandler(this.Conn_BTN_Click);
            // 
            // textBox1
            // 
            this.textBox1.Location = new System.Drawing.Point(16, 42);
            this.textBox1.Name = "textBox1";
            this.textBox1.Size = new System.Drawing.Size(100, 21);
            this.textBox1.TabIndex = 2;
            // 
            // textBox2
            // 
            this.textBox2.Location = new System.Drawing.Point(122, 42);
            this.textBox2.Name = "textBox2";
            this.textBox2.Size = new System.Drawing.Size(100, 21);
            this.textBox2.TabIndex = 3;
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(14, 27);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(52, 12);
            this.label4.TabIndex = 4;
            this.label4.Text = "Address";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(120, 27);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(27, 12);
            this.label5.TabIndex = 5;
            this.label5.Text = "Port";
            // 
            // richTextBox1
            // 
            this.richTextBox1.Location = new System.Drawing.Point(16, 109);
            this.richTextBox1.Name = "richTextBox1";
            this.richTextBox1.Size = new System.Drawing.Size(206, 199);
            this.richTextBox1.TabIndex = 6;
            this.richTextBox1.Text = "";
            // 
            // ServiceDesc_BTN
            // 
            this.ServiceDesc_BTN.Location = new System.Drawing.Point(246, 111);
            this.ServiceDesc_BTN.Name = "ServiceDesc_BTN";
            this.ServiceDesc_BTN.Size = new System.Drawing.Size(179, 23);
            this.ServiceDesc_BTN.TabIndex = 7;
            this.ServiceDesc_BTN.Text = "Service Description";
            this.ServiceDesc_BTN.UseVisualStyleBackColor = true;
            this.ServiceDesc_BTN.Click += new System.EventHandler(this.ServiceDesc_BTN_Click);
            // 
            // MachineReady_BTN
            // 
            this.MachineReady_BTN.Location = new System.Drawing.Point(246, 140);
            this.MachineReady_BTN.Name = "MachineReady_BTN";
            this.MachineReady_BTN.Size = new System.Drawing.Size(179, 23);
            this.MachineReady_BTN.TabIndex = 8;
            this.MachineReady_BTN.Text = "Machine Ready";
            this.MachineReady_BTN.UseVisualStyleBackColor = true;
            this.MachineReady_BTN.Click += new System.EventHandler(this.MachineReady_BTN_Click);
            // 
            // RevokeMachine_BTN
            // 
            this.RevokeMachine_BTN.Location = new System.Drawing.Point(246, 169);
            this.RevokeMachine_BTN.Name = "RevokeMachine_BTN";
            this.RevokeMachine_BTN.Size = new System.Drawing.Size(179, 23);
            this.RevokeMachine_BTN.TabIndex = 9;
            this.RevokeMachine_BTN.Text = "Revoke Machine Ready";
            this.RevokeMachine_BTN.UseVisualStyleBackColor = true;
            this.RevokeMachine_BTN.Click += new System.EventHandler(this.RevokeMachine_BTN_Click);
            // 
            // StartTrans_BTN
            // 
            this.StartTrans_BTN.Location = new System.Drawing.Point(246, 198);
            this.StartTrans_BTN.Name = "StartTrans_BTN";
            this.StartTrans_BTN.Size = new System.Drawing.Size(179, 23);
            this.StartTrans_BTN.TabIndex = 10;
            this.StartTrans_BTN.Text = "Start Transport";
            this.StartTrans_BTN.UseVisualStyleBackColor = true;
            this.StartTrans_BTN.Click += new System.EventHandler(this.StartTrans_BTN_Click);
            // 
            // StopTrans_BTN
            // 
            this.StopTrans_BTN.Location = new System.Drawing.Point(246, 227);
            this.StopTrans_BTN.Name = "StopTrans_BTN";
            this.StopTrans_BTN.Size = new System.Drawing.Size(179, 23);
            this.StopTrans_BTN.TabIndex = 11;
            this.StopTrans_BTN.Text = "Stop Transport";
            this.StopTrans_BTN.UseVisualStyleBackColor = true;
            this.StopTrans_BTN.Click += new System.EventHandler(this.StopTrans_BTN_Click);
            // 
            // NotiData_BTN
            // 
            this.NotiData_BTN.Location = new System.Drawing.Point(246, 256);
            this.NotiData_BTN.Name = "NotiData_BTN";
            this.NotiData_BTN.Size = new System.Drawing.Size(179, 23);
            this.NotiData_BTN.TabIndex = 13;
            this.NotiData_BTN.Text = "Notification Data";
            this.NotiData_BTN.UseVisualStyleBackColor = true;
            this.NotiData_BTN.Click += new System.EventHandler(this.NotiData_BTN_Click);
            // 
            // CheckAlive_BTN
            // 
            this.CheckAlive_BTN.Location = new System.Drawing.Point(246, 285);
            this.CheckAlive_BTN.Name = "CheckAlive_BTN";
            this.CheckAlive_BTN.Size = new System.Drawing.Size(179, 23);
            this.CheckAlive_BTN.TabIndex = 14;
            this.CheckAlive_BTN.Text = "Check Alive";
            this.CheckAlive_BTN.UseVisualStyleBackColor = true;
            this.CheckAlive_BTN.Click += new System.EventHandler(this.CheckAlive_BTN_Click);
            // 
            // Form1
            // 
            this.ClientSize = new System.Drawing.Size(437, 328);
            this.Controls.Add(this.CheckAlive_BTN);
            this.Controls.Add(this.NotiData_BTN);
            this.Controls.Add(this.StopTrans_BTN);
            this.Controls.Add(this.StartTrans_BTN);
            this.Controls.Add(this.RevokeMachine_BTN);
            this.Controls.Add(this.MachineReady_BTN);
            this.Controls.Add(this.ServiceDesc_BTN);
            this.Controls.Add(this.richTextBox1);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.textBox2);
            this.Controls.Add(this.textBox1);
            this.Controls.Add(this.Conn_BTN);
            this.Name = "Form1";
            this.Text = "v";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button button_read;
        private System.Windows.Forms.Button button_write;
        private System.Windows.Forms.TextBox textBox_addr;
        private System.Windows.Forms.TextBox textBox_data;
        private System.Windows.Forms.TextBox textBox_code;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Button Conn_BTN;
        private System.Windows.Forms.TextBox textBox1;
        private System.Windows.Forms.TextBox textBox2;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.RichTextBox richTextBox1;
        private System.Windows.Forms.Button ServiceDesc_BTN;
        private System.Windows.Forms.Button MachineReady_BTN;
        private System.Windows.Forms.Button RevokeMachine_BTN;
        private System.Windows.Forms.Button StartTrans_BTN;
        private System.Windows.Forms.Button StopTrans_BTN;
        private System.Windows.Forms.Button NotiData_BTN;
        private System.Windows.Forms.Button CheckAlive_BTN;
    }
}

