namespace WindowsFormsApp7
{
    class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private : System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected : override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        ///region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private : void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form1));
            this.linkLabel1 = new System.Windows.Forms.LinkLabel();
            this.button1 = new System.Windows.Forms.Button();
            this.button2 = new System.Windows.Forms.Button();
            this.button3 = new System.Windows.Forms.Button();
            this.menuStrip1 = new System.Windows.Forms.MenuStrip();
            this.newToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.applyNowToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.aboutUsToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.learnMoreToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.moreInformationToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.anyQueriesToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.exitToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.button4 = new System.Windows.Forms.Button();
            this.label1 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.label6 = new System.Windows.Forms.Label();
            this.button5 = new System.Windows.Forms.Button();
            this.label4 = new System.Windows.Forms.Label();
            this.directorySearcher1 = new System.DirectoryServices.DirectorySearcher();
            this.menuStrip1.SuspendLayout();
            this.SuspendLayout();
            // 
            // linkLabel1
            // 
            this.linkLabel1.AutoSize = true;
            this.linkLabel1.BackColor = System.Drawing.Color.Gold;
            this.linkLabel1.Font = new System.Drawing.Font("Yu Gothic UI", 36F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.linkLabel1.LinkColor = System.Drawing.Color.Black;
            this.linkLabel1.Location = new System.Drawing.Point(122, 28);
            this.linkLabel1.Name = "linkLabel1";
            this.linkLabel1.Size = new System.Drawing.Size(717, 65);
            this.linkLabel1.TabIndex = 1;
            this.linkLabel1.TabStop = true;
            this.linkLabel1.Text = "WELCOME TO SHOPPING MALL";
            // 
            // button1
            // 
            this.button1.BackgroundImage = ((System.Drawing.Image)(resources.GetObject("button1.BackgroundImage")));
            this.button1.Location = new System.Drawing.Point(509, 96);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(161, 66);
            this.button1.TabIndex = 2;
            this.button1.Text = "FIRST FLOOR";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // button2
            // 
            this.button2.BackgroundImage = ((System.Drawing.Image)(resources.GetObject("button2.BackgroundImage")));
            this.button2.Location = new System.Drawing.Point(509, 298);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(161, 66);
            this.button2.TabIndex = 3;
            this.button2.Text = "THIRD FLOOR";
            this.button2.UseVisualStyleBackColor = true;
            this.button2.Click += new System.EventHandler(this.button2_Click);
            // 
            // button3
            // 
            this.button3.BackgroundImage = ((System.Drawing.Image)(resources.GetObject("button3.BackgroundImage")));
            this.button3.Location = new System.Drawing.Point(509, 192);
            this.button3.Name = "button3";
            this.button3.Size = new System.Drawing.Size(161, 66);
            this.button3.TabIndex = 4;
            this.button3.Text = "SECOND FLOOR";
            this.button3.UseVisualStyleBackColor = true;
            this.button3.Click += new System.EventHandler(this.button3_Click);
            // 
            // menuStrip1
            // 
            this.menuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.newToolStripMenuItem,
            this.applyNowToolStripMenuItem,
            this.aboutUsToolStripMenuItem,
            this.learnMoreToolStripMenuItem,
            this.moreInformationToolStripMenuItem,
            this.anyQueriesToolStripMenuItem,
            this.exitToolStripMenuItem});
            this.menuStrip1.Location = new System.Drawing.Point(0, 0);
            this.menuStrip1.Name = "menuStrip1";
            this.menuStrip1.Size = new System.Drawing.Size(1303, 24);
            this.menuStrip1.TabIndex = 5;
            this.menuStrip1.Text = "menuStrip1";
            // 
            // newToolStripMenuItem
            // 
            this.newToolStripMenuItem.BackColor = System.Drawing.SystemColors.ActiveCaption;
            this.newToolStripMenuItem.BackgroundImage = ((System.Drawing.Image)(resources.GetObject("newToolStripMenuItem.BackgroundImage")));
            this.newToolStripMenuItem.Name = "newToolStripMenuItem";
            this.newToolStripMenuItem.Size = new System.Drawing.Size(52, 20);
            this.newToolStripMenuItem.Text = "Home";
            this.newToolStripMenuItem.Click += new System.EventHandler(this.newToolStripMenuItem_Click);
            // 
            // applyNowToolStripMenuItem
            // 
            this.applyNowToolStripMenuItem.BackgroundImage = ((System.Drawing.Image)(resources.GetObject("applyNowToolStripMenuItem.BackgroundImage")));
            this.applyNowToolStripMenuItem.Name = "applyNowToolStripMenuItem";
            this.applyNowToolStripMenuItem.Size = new System.Drawing.Size(78, 20);
            this.applyNowToolStripMenuItem.Text = "Apply Now";
            this.applyNowToolStripMenuItem.Click += new System.EventHandler(this.applyNowToolStripMenuItem_Click);
            // 
            // aboutUsToolStripMenuItem
            // 
            this.aboutUsToolStripMenuItem.BackgroundImage = ((System.Drawing.Image)(resources.GetObject("aboutUsToolStripMenuItem.BackgroundImage")));
            this.aboutUsToolStripMenuItem.Name = "aboutUsToolStripMenuItem";
            this.aboutUsToolStripMenuItem.Size = new System.Drawing.Size(68, 20);
            this.aboutUsToolStripMenuItem.Text = "About Us";
            this.aboutUsToolStripMenuItem.Click += new System.EventHandler(this.aboutUsToolStripMenuItem_Click);
            // 
            // learnMoreToolStripMenuItem
            // 
            this.learnMoreToolStripMenuItem.BackgroundImage = ((System.Drawing.Image)(resources.GetObject("learnMoreToolStripMenuItem.BackgroundImage")));
            this.learnMoreToolStripMenuItem.Name = "learnMoreToolStripMenuItem";
            this.learnMoreToolStripMenuItem.Size = new System.Drawing.Size(79, 20);
            this.learnMoreToolStripMenuItem.Text = "Learn More";
            this.learnMoreToolStripMenuItem.Click += new System.EventHandler(this.learnMoreToolStripMenuItem_Click);
            // 
            // moreInformationToolStripMenuItem
            // 
            this.moreInformationToolStripMenuItem.BackgroundImage = ((System.Drawing.Image)(resources.GetObject("moreInformationToolStripMenuItem.BackgroundImage")));
            this.moreInformationToolStripMenuItem.Name = "moreInformationToolStripMenuItem";
            this.moreInformationToolStripMenuItem.Size = new System.Drawing.Size(113, 20);
            this.moreInformationToolStripMenuItem.Text = "More Information";
            this.moreInformationToolStripMenuItem.Click += new System.EventHandler(this.moreInformationToolStripMenuItem_Click);
            // 
            // anyQueriesToolStripMenuItem
            // 
            this.anyQueriesToolStripMenuItem.BackgroundImage = ((System.Drawing.Image)(resources.GetObject("anyQueriesToolStripMenuItem.BackgroundImage")));
            this.anyQueriesToolStripMenuItem.Name = "anyQueriesToolStripMenuItem";
            this.anyQueriesToolStripMenuItem.Size = new System.Drawing.Size(88, 20);
            this.anyQueriesToolStripMenuItem.Text = "Any Queries?";
            this.anyQueriesToolStripMenuItem.Click += new System.EventHandler(this.anyQueriesToolStripMenuItem_Click);
            // 
            // exitToolStripMenuItem
            // 
            this.exitToolStripMenuItem.BackgroundImage = ((System.Drawing.Image)(resources.GetObject("exitToolStripMenuItem.BackgroundImage")));
            this.exitToolStripMenuItem.Name = "exitToolStripMenuItem";
            this.exitToolStripMenuItem.Size = new System.Drawing.Size(38, 20);
            this.exitToolStripMenuItem.Text = "Exit";
            this.exitToolStripMenuItem.Click += new System.EventHandler(this.exitToolStripMenuItem_Click);
            // 
            // button4
            // 
            this.button4.BackgroundImage = ((System.Drawing.Image)(resources.GetObject("button4.BackgroundImage")));
            this.button4.Font = new System.Drawing.Font("Yu Gothic UI", 20.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.button4.Location = new System.Drawing.Point(368, 385);
            this.button4.Name = "button4";
            this.button4.Size = new System.Drawing.Size(246, 96);
            this.button4.TabIndex = 7;
            this.button4.Text = "Exit";
            this.button4.UseVisualStyleBackColor = true;
            this.button4.Click += new System.EventHandler(this.button4_Click);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.Image = ((System.Drawing.Image)(resources.GetObject("label1.Image")));
            this.label1.Location = new System.Drawing.Point(292, 100);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(197, 25);
            this.label1.TabIndex = 8;
            this.label1.Text = "SHOPPING AREA";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label3.Image = ((System.Drawing.Image)(resources.GetObject("label3.Image")));
            this.label3.Location = new System.Drawing.Point(292, 304);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(139, 25);
            this.label3.TabIndex = 10;
            this.label3.Text = "PLAY AREA";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label2.ForeColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.label2.Image = ((System.Drawing.Image)(resources.GetObject("label2.Image")));
            this.label2.Location = new System.Drawing.Point(292, 197);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(198, 25);
            this.label2.TabIndex = 9;
            this.label2.Text = "COSMETIC AREA";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.BackColor = System.Drawing.Color.Gold;
            this.label5.Location = new System.Drawing.Point(1013, 626);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(212, 39);
            this.label5.TabIndex = 17;
            this.label5.Text = "CONTACT US 24/7 and  We\'re Located At\r\n\r\n\r\n";
            this.label5.Click += new System.EventHandler(this.label5_Click);
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.BackColor = System.Drawing.Color.Gold;
            this.label6.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label6.Location = new System.Drawing.Point(25, 602);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(335, 100);
            this.label6.TabIndex = 18;
            this.label6.Text = "Designed By :\r\n13184 - Mateen Ahmed Abbasi\r\n13196 - Sajeel Suleman\r\n\r\n";
            this.label6.Click += new System.EventHandler(this.label6_Click);
            // 
            // button5
            // 
            this.button5.BackColor = System.Drawing.Color.Gold;
            this.button5.Location = new System.Drawing.Point(1053, 679);
            this.button5.Name = "button5";
            this.button5.Size = new System.Drawing.Size(141, 23);
            this.button5.TabIndex = 19;
            this.button5.Text = "LOCATION";
            this.button5.UseVisualStyleBackColor = false;
            this.button5.Click += new System.EventHandler(this.button5_Click);
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.BackColor = System.Drawing.Color.Gold;
            this.label4.Location = new System.Drawing.Point(975, 559);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(280, 52);
            this.label4.TabIndex = 20;
            this.label4.Text = "Conctact : 0336-1800485\r\nEmail : Mateenabbasi603@gmail.com\r\nAddress : itehaad - e" +
    " - project, lab 5, PAF KIET, KARACHI\r\n ";
            this.label4.Click += new System.EventHandler(this.label4_Click);
            // 
            // directorySearcher1
            // 
            this.directorySearcher1.ClientTimeout = System.TimeSpan.Parse("-00:00:01");
            this.directorySearcher1.ServerPageTimeLimit = System.TimeSpan.Parse("-00:00:01");
            this.directorySearcher1.ServerTimeLimit = System.TimeSpan.Parse("-00:00:01");
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackgroundImage = ((System.Drawing.Image)(resources.GetObject("$this.BackgroundImage")));
            this.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.ClientSize = new System.Drawing.Size(1303, 749);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.button5);
            this.Controls.Add(this.label6);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.button4);
            this.Controls.Add(this.button3);
            this.Controls.Add(this.button2);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.linkLabel1);
            this.Controls.Add(this.menuStrip1);
            this.Cursor = System.Windows.Forms.Cursors.Hand;
            this.IsMdiContainer = true;
            this.MainMenuStrip = this.menuStrip1;
            this.Name = "Form1";
            this.Text = "SHOPPING MALL MANAGEMENT SYSTEM";
            this.WindowState = System.Windows.Forms.FormWindowState.Maximized;
            this.menuStrip1.ResumeLayout(false);
            this.menuStrip1.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        ///endregion

        private : System.Windows.Forms.LinkLabel linkLabel1;
        private : System.Windows.Forms.Button button1;
        private : System.Windows.Forms.Button button2;
        private : System.Windows.Forms.Button button3;
        private : System.Windows.Forms.MenuStrip menuStrip1;
        private : System.Windows.Forms.ToolStripMenuItem newToolStripMenuItem;
        private : System.Windows.Forms.ToolStripMenuItem applyNowToolStripMenuItem;
        private : System.Windows.Forms.ToolStripMenuItem aboutUsToolStripMenuItem;
        private : System.Windows.Forms.ToolStripMenuItem learnMoreToolStripMenuItem;
        private : System.Windows.Forms.ToolStripMenuItem moreInformationToolStripMenuItem;
        private : System.Windows.Forms.ToolStripMenuItem anyQueriesToolStripMenuItem;
        private : System.Windows.Forms.ToolStripMenuItem exitToolStripMenuItem;
        private : System.Windows.Forms.Button button4;
        private : System.Windows.Forms.Label label1;
        private : System.Windows.Forms.Label label3;
        private : System.Windows.Forms.Label label2;
        private : System.Windows.Forms.Label label5;
        private : System.Windows.Forms.Label label6;
        private : System.Windows.Forms.Button button5;
        private : System.Windows.Forms.Label label4;
        private : System.DirectoryServices.DirectorySearcher directorySearcher1;
    }
}

