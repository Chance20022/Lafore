using System;
using System.Collections.Generic;
using System.Collections.Specialized;
using System.ComponentModel;
using System.Data;
using System.Diagnostics;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Calculate
{
    public partial class Form1 : Form
    {
        double[] memory = new double[7]; //для хранения чисел, чтобы была возможность  потом складывать
        char[] operation = new char[6]; //для хранения операций над чиселами
        double number = 0; //для хранения чисел вводимые с интерфейса
        double afterdots = 0; // для чисел после запятой вводимые с интерфейса
        int count = 0; //счётчик для цикла, чтобы не задействовать пустые ячейки 
        bool checkDot = true; // проверка для ввода после запятой
        int counter = 0; // работает, да и хуй с ней

        public Form1()
        {
            InitializeComponent();
        }

        public double dotsF(double dotsinstall, int numberbut) // алоритм предназначенный для выявления чисел после запятой
        {
            double tempdotsF = 1;

            for(int i = 0; i < counter-1; i++)
            {
                tempdotsF *= 0.1;
            }

            dotsinstall = tempdotsF * (0.1 * numberbut);

            return dotsinstall;
        }

        public double memoryNumb(double i, char ch) //хранит в массиве все данные для того, чтобы потом их все сложить с помощью специального алгоритма
        {
            memory[count] = i;
            operation[count] = ch;
            count++;
            return 0;

        }

        public void clear() // кнока Clear
        {
            count = 0;
            number = 0;
            counter = 0;
            afterdots = 0;
        }

        public double answer() //алгоритм для воспроизведения операций над числами
        {
            double answerN = 0;

            for (int i = 0; i < count; i++)
            {
                switch (operation[i])
                {
                    case '+':
                        answerN = memory[i] + memory[i+1];
                        memory[i + 1] = answerN;
                        break;
                    case '-':
                        answerN = memory[i] - memory[i + 1];
                        memory[i + 1] = answerN;
                        break;
                    case '*':
                        answerN = memory[i] * memory[i + 1];
                        memory[i + 1] = answerN;
                        break;
                    case '/':
                        answerN = memory[i] / memory[i + 1];
                        memory[i + 1] = answerN;
                        break;
                }
            }
            count = 0;
            return answerN;
        }

        private void button1_Click(object sender, EventArgs e) //1
        {
            if (checkDot == true)
            {
                number = number * 10 + 1;

                textBox1.Text = Convert.ToString(number);
            }
            else if(checkDot == false)
            {
                counter++;
                afterdots = afterdots + dotsF(afterdots, 1);

                number += afterdots;
                    
                textBox1.Text = Convert.ToString(number);
                number = number - afterdots;
            }

        }

        private void button2_Click(object sender, EventArgs e) //2
        {
            if (checkDot == true)
            {
                number = number * 10 + 2;

                textBox1.Text = Convert.ToString(number);
            }
            else if (checkDot == false)
            {

                counter++;
                afterdots = afterdots + dotsF(afterdots, 2);

                number += afterdots;

                textBox1.Text = Convert.ToString(number);
                number = number - afterdots;
            }
        }

        private void button3_Click(object sender, EventArgs e) //3
        {
            if (checkDot == true)
            {
                number = number * 10 + 3;

                textBox1.Text = Convert.ToString(number);
            }
            else if (checkDot == false)
            {
                counter++;
                afterdots = afterdots + dotsF(afterdots, 3);

                number += afterdots;

                textBox1.Text = Convert.ToString(number);
                number = number - afterdots;
            }
        }

        private void button4_Click(object sender, EventArgs e) //4
        {
            if (checkDot == true)
            {
                number = number * 10 + 4;

                textBox1.Text = Convert.ToString(number);
            }
            else if (checkDot == false)
            {
                counter++;
                afterdots = afterdots + dotsF(afterdots, 4);

                number += afterdots;

                textBox1.Text = Convert.ToString(number);
                number = number - afterdots;
            }
        }

        private void button5_Click(object sender, EventArgs e) //5 
        {
            if (checkDot == true)
            {
                number = number * 10 + 5;

                textBox1.Text = Convert.ToString(number);
            }
            else if (checkDot == false)
            {
                counter++;
                afterdots = afterdots + dotsF(afterdots, 5);

                number += afterdots;

                textBox1.Text = Convert.ToString(number);
                number = number - afterdots;
            }
        }

        private void button6_Click(object sender, EventArgs e) //6
        {
            if (checkDot == true)
            {
                number = number * 10 + 6;

                textBox1.Text = Convert.ToString(number);
            }
            else if (checkDot == false)
            {
                counter++;
                afterdots = afterdots + dotsF(afterdots, 6);

                number += afterdots;

                textBox1.Text = Convert.ToString(number);
                number = number - afterdots;
            }
        }

        private void button7_Click(object sender, EventArgs e) //7
        {
            if (checkDot == true)
            {
                number = number * 10 + 7;

                textBox1.Text = Convert.ToString(number);
            }
            else if (checkDot == false)
            {
                counter++;
                afterdots = afterdots + dotsF(afterdots, 7);

                number += afterdots;

                textBox1.Text = Convert.ToString(number);
                number = number - afterdots;
            }
        }

        private void button8_Click(object sender, EventArgs e) //8
        {
            if (checkDot == true)
            {
                number = number * 10 + 8;

                textBox1.Text = Convert.ToString(number);
            }
            else if (checkDot == false)
            {
                counter++;
                afterdots = afterdots + dotsF(afterdots, 8);

                number += afterdots;

                textBox1.Text = Convert.ToString(number);
                number = number - afterdots;
            }
        }

        private void button9_Click(object sender, EventArgs e) //9
        {
            if (checkDot == true)
            {
                number = number * 10 + 9;

                textBox1.Text = Convert.ToString(number);
            }
            else if (checkDot == false)
            {
                counter++;
                afterdots = afterdots + dotsF(afterdots, 9);

                number += afterdots;

                textBox1.Text = Convert.ToString(number);
                number = number - afterdots;
            }
        }

        private void button14_Click(object sender, EventArgs e) // 0
        {
            if (checkDot == true)
            {
                number = number * 10;

                textBox1.Text = Convert.ToString(number);
            }
            else if (checkDot == false)
            {
                afterdots = afterdots * 0.1;

                number += afterdots;

                textBox1.Text = Convert.ToString(number);
                number = number - afterdots;
            }
        }

        private void button15_Click(object sender, EventArgs e) //00
        {
            if (checkDot == true)
            {
                number = number * 100;
                textBox1.Text = Convert.ToString(number);
            }
            else if (checkDot == false)
            {
                afterdots = afterdots * 0.01;

                number += afterdots;

                textBox1.Text = Convert.ToString(number);
                number = number - afterdots;
            }
        }

        private void button13_Click(object sender, EventArgs e) //ровно
        {
            if (checkDot == true)
            {
                number = memoryNumb(number, ' ');
                number = answer();
                textBox1.Text = Convert.ToString(number);
            }
            else if (checkDot == false)
            {
                number = number + afterdots;
                textBox1.Text = Convert.ToString(number);
                checkDot = true;
            }
        }

        private void button12_Click(object sender, EventArgs e) //+
        {
            if (checkDot == true)
            {
                number = memoryNumb(number, '+');
            }
            else if (checkDot == false)
            {
                number += afterdots;
                checkDot = true;
                number = memoryNumb(number, '+');
                afterdots = 0;
                counter = 0;
            }

            textBox1.Text = Convert.ToString("+");
        }

        private void button11_Click(object sender, EventArgs e) //-
        {
            if (checkDot == true)
            {
                number = memoryNumb(number, '-');
            }
            else if (checkDot == false)
            {
                number += afterdots;
                checkDot = true;
                number = memoryNumb(number, '-');
                afterdots = 0;
                counter = 0;
            }

            textBox1.Text = Convert.ToString("-");
        }

        private void button10_Click(object sender, EventArgs e) //*
        {
            if (checkDot == true)
            {
                number = memoryNumb(number, '*');
            }
            else if (checkDot == false)
            {
                number += afterdots;
                checkDot = true;
                number = memoryNumb(number, '*');
                afterdots = 0;
                counter = 0;
            }

            textBox1.Text = Convert.ToString("*");
        }

        private void button17_Click(object sender, EventArgs e) // /
        {
            if (checkDot == true)
            {
                number = memoryNumb(number, '/');
            }
            else if (checkDot == false)
            {
                number += afterdots;
                checkDot = true;
                number = memoryNumb(number, '/');
                afterdots = 0;
                counter = 0;
            }

            textBox1.Text = Convert.ToString("/");
        }

        private void button18_Click(object sender, EventArgs e) // clear
        {
            clear();

            textBox1.Text = Convert.ToString(0);
            checkDot = true;
        }

        private void textBox1_TextChanged(object sender, EventArgs e) // вывод
        {

        }

        private void button16_Click_1(object sender, EventArgs e) // запятая
        {
            checkDot = false;

            textBox1.Text = "";
            textBox1.Text = textBox1.Text + number + ",";
        }
    }
}
