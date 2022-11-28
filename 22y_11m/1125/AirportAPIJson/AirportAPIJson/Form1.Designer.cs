namespace AirportAPIJson
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
            this.components = new System.ComponentModel.Container();
            this.dataGridView1 = new System.Windows.Forms.DataGridView();
            this.airportBindingSource = new System.Windows.Forms.BindingSource(this.components);
            this.항공사DataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.운항편명DataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.출발공항DataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.도착공항DataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.출발시간DataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.도착시간DataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.운항요일DataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.시작일자DataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.종료일자DataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.국내국제DataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.textBox1 = new System.Windows.Forms.TextBox();
            this.button1 = new System.Windows.Forms.Button();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.airportBindingSource)).BeginInit();
            this.SuspendLayout();
            // 
            // dataGridView1
            // 
            this.dataGridView1.AutoGenerateColumns = false;
            this.dataGridView1.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dataGridView1.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.항공사DataGridViewTextBoxColumn,
            this.운항편명DataGridViewTextBoxColumn,
            this.출발공항DataGridViewTextBoxColumn,
            this.도착공항DataGridViewTextBoxColumn,
            this.출발시간DataGridViewTextBoxColumn,
            this.도착시간DataGridViewTextBoxColumn,
            this.운항요일DataGridViewTextBoxColumn,
            this.시작일자DataGridViewTextBoxColumn,
            this.종료일자DataGridViewTextBoxColumn,
            this.국내국제DataGridViewTextBoxColumn});
            this.dataGridView1.DataSource = this.airportBindingSource;
            this.dataGridView1.Location = new System.Drawing.Point(3, 12);
            this.dataGridView1.Name = "dataGridView1";
            this.dataGridView1.RowTemplate.Height = 23;
            this.dataGridView1.Size = new System.Drawing.Size(1052, 175);
            this.dataGridView1.TabIndex = 0;
            // 
            // airportBindingSource
            // 
            this.airportBindingSource.DataSource = typeof(AirportAPIJson.Airport);
            // 
            // 항공사DataGridViewTextBoxColumn
            // 
            this.항공사DataGridViewTextBoxColumn.DataPropertyName = "항공사";
            this.항공사DataGridViewTextBoxColumn.HeaderText = "항공사";
            this.항공사DataGridViewTextBoxColumn.Name = "항공사DataGridViewTextBoxColumn";
            // 
            // 운항편명DataGridViewTextBoxColumn
            // 
            this.운항편명DataGridViewTextBoxColumn.DataPropertyName = "운항편명";
            this.운항편명DataGridViewTextBoxColumn.HeaderText = "운항편명";
            this.운항편명DataGridViewTextBoxColumn.Name = "운항편명DataGridViewTextBoxColumn";
            // 
            // 출발공항DataGridViewTextBoxColumn
            // 
            this.출발공항DataGridViewTextBoxColumn.DataPropertyName = "출발공항";
            this.출발공항DataGridViewTextBoxColumn.HeaderText = "출발공항";
            this.출발공항DataGridViewTextBoxColumn.Name = "출발공항DataGridViewTextBoxColumn";
            // 
            // 도착공항DataGridViewTextBoxColumn
            // 
            this.도착공항DataGridViewTextBoxColumn.DataPropertyName = "도착공항";
            this.도착공항DataGridViewTextBoxColumn.HeaderText = "도착공항";
            this.도착공항DataGridViewTextBoxColumn.Name = "도착공항DataGridViewTextBoxColumn";
            // 
            // 출발시간DataGridViewTextBoxColumn
            // 
            this.출발시간DataGridViewTextBoxColumn.DataPropertyName = "출발시간";
            this.출발시간DataGridViewTextBoxColumn.HeaderText = "출발시간";
            this.출발시간DataGridViewTextBoxColumn.Name = "출발시간DataGridViewTextBoxColumn";
            // 
            // 도착시간DataGridViewTextBoxColumn
            // 
            this.도착시간DataGridViewTextBoxColumn.DataPropertyName = "도착시간";
            this.도착시간DataGridViewTextBoxColumn.HeaderText = "도착시간";
            this.도착시간DataGridViewTextBoxColumn.Name = "도착시간DataGridViewTextBoxColumn";
            // 
            // 운항요일DataGridViewTextBoxColumn
            // 
            this.운항요일DataGridViewTextBoxColumn.DataPropertyName = "운항요일";
            this.운항요일DataGridViewTextBoxColumn.HeaderText = "운항요일";
            this.운항요일DataGridViewTextBoxColumn.Name = "운항요일DataGridViewTextBoxColumn";
            // 
            // 시작일자DataGridViewTextBoxColumn
            // 
            this.시작일자DataGridViewTextBoxColumn.DataPropertyName = "시작일자";
            this.시작일자DataGridViewTextBoxColumn.HeaderText = "시작일자";
            this.시작일자DataGridViewTextBoxColumn.Name = "시작일자DataGridViewTextBoxColumn";
            // 
            // 종료일자DataGridViewTextBoxColumn
            // 
            this.종료일자DataGridViewTextBoxColumn.DataPropertyName = "종료일자";
            this.종료일자DataGridViewTextBoxColumn.HeaderText = "종료일자";
            this.종료일자DataGridViewTextBoxColumn.Name = "종료일자DataGridViewTextBoxColumn";
            // 
            // 국내국제DataGridViewTextBoxColumn
            // 
            this.국내국제DataGridViewTextBoxColumn.DataPropertyName = "국내_국제";
            this.국내국제DataGridViewTextBoxColumn.HeaderText = "국내_국제";
            this.국내국제DataGridViewTextBoxColumn.Name = "국내국제DataGridViewTextBoxColumn";
            // 
            // textBox1
            // 
            this.textBox1.Location = new System.Drawing.Point(386, 220);
            this.textBox1.Name = "textBox1";
            this.textBox1.Size = new System.Drawing.Size(100, 21);
            this.textBox1.TabIndex = 1;
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(529, 211);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(142, 36);
            this.button1.TabIndex = 2;
            this.button1.Text = "button1";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(1067, 450);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.textBox1);
            this.Controls.Add(this.dataGridView1);
            this.Name = "Form1";
            this.Text = "Form1";
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.airportBindingSource)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.DataGridView dataGridView1;
        private System.Windows.Forms.DataGridViewTextBoxColumn 항공사DataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn 운항편명DataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn 출발공항DataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn 도착공항DataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn 출발시간DataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn 도착시간DataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn 운항요일DataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn 시작일자DataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn 종료일자DataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn 국내국제DataGridViewTextBoxColumn;
        private System.Windows.Forms.BindingSource airportBindingSource;
        private System.Windows.Forms.TextBox textBox1;
        private System.Windows.Forms.Button button1;
    }
}

