/*
Implementation of following sparse matrix operations in python: addition of two sparse matrices, simple transpose, fast transpose
Name-Gavali swapnil annasaheb
Roll no.-03
Subject-DSL
*/
#include <iostream>
using namespace std;

class myclass
{
    int a[10][10], b[10][10], c[10][3], ar, br, i, j, k, s, ac;

public:
    void get_sparse();
    void add_sparse();
    void display_addition();
    void transpose_input();
    void transpose();
    void fast_transpose();
};

void myclass::get_sparse()
{

    cout << "Enter a size of first sparse matrix  row :";
    cin >> ar;
    cout << "Enter a first matrix:";
    for (i = 0; i < ar; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << endl;
    cout << "You enter first matrix as:" << endl;
    for (i = 0; i < ar; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Enter a size of second sparse matrix row:";
    cin >> br;
    cout << "Enter a second matrix:";
    for (i = 0; i < br; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> b[i][j];
        }
    }
    cout << endl;
    cout << "You enter second matrix as:" << endl;
    for (i = 0; i < br; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// addition function

void myclass::add_sparse()
{
    i = 1, j = 1, k = 1;
    c[0][0] = a[0][0];
    c[0][1] = a[0][1];
    while (i <= a[0][2] && j <= b[0][2])
    {
        if (a[i][0] == b[j][0])
        {
            if (a[i][1] == b[j][1])
            {
                c[k][0] = a[i][0];
                c[k][1] = a[i][1];
                c[k][2] = a[i][2] + b[j][2];
                i++, j++, k++;
            }
            else if (a[i][1] < b[j][1])
            {
                c[k][0] = a[i][0];
                c[k][1] = a[i][1];
                c[k][2] = a[i][2];
                i++, k++;
            }
            else
            {
                c[k][0] = b[j][0];
                c[k][1] = b[j][1];
                c[k][2] = b[j][2];
                j++, k++;
            }
        }
        else if (a[i][0] < b[j][0])
        {
            c[k][0] = a[i][0];
            c[k][1] = a[i][1];
            c[k][2] = a[i][2];
            i++, k++;
        }
        else
        {
            c[k][0] = b[j][0];
            c[k][1] = b[j][1];
            c[k][2] = b[j][2];
            j++, k++;
        }
    }

    while (i <= a[0][2])
    {
        c[k][0] = a[i][0];
        c[k][1] = a[i][1];
        c[k][2] = a[i][2];
        i++, k++;
    }
    while (j <= b[0][2])
    {
        c[k][0] = b[j][0];
        c[k][1] = b[j][1];
        c[k][2] = b[j][2];
        j++, k++;
    }
}

void myclass::display_addition()
{

    cout << "matrix addition is:" << endl;
    c[0][2] = k - 1;
    int n = c[0][2];

    for (i = 0; i < n + 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}
void myclass::transpose_input()
{

    cout << "Enter no. of non zero element in your matrix:";
    cin >> ar;
    ac = 3;
    s = ar + 1;
    cout << "Enter a sparse matrix:";
    for (i = 0; i < s; i++)
    {
        for (j = 0; j < ac; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "You enter a matrix: " << endl;
    for (i = 0; i < s; i++)
    {
        for (j = 0; j < ac; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void myclass::transpose()
{
    int n, t, k = 1, i, j;
    c[0][0] = a[0][1];
    c[0][1] = a[0][0];
    c[0][2] = a[0][2];
    n = a[0][1]; // no of columns
    t = a[0][2]; // no of non zero element

    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= t; j++)
        {

            if (i == a[j][1])
            {
                c[k][0] = a[j][1];
                c[k][1] = a[j][0];
                c[k][2] = a[j][2];
                k++;
            }
        }
    }
    cout << "transpose of matrix is:" << endl;

    for (i = 0; i < s; i++)
    {
        for (j = 0; j < ac; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}

void myclass::fast_transpose()
{
    int c[10][3], x[10], y[10], n, t, i, j;
    c[0][0] = a[0][1];
    c[0][1] = a[0][0];
    c[0][2] = a[0][2];
    n = a[0][1], t = a[0][2];
    for (i = 0; i < n; i++)
    {
        x[i] = 0;
    }
    for (i = 1; i <= t; i++)
    {
        x[a[i][1]]++;
    }
    y[0] = 1;
    for (i = 1; i < n; i++)
    {
        y[i] = y[i - 1] + x[i - 1];
    }
    for (i = 1; i <= t; i++)
    {
        j = y[a[i][1]];
        c[j][0] = a[i][1];
        c[j][1] = a[i][0];
        c[j][2] = a[i][2];
        y[a[i][1]]++;
    }
    cout << endl;
    cout << "Fast transpose is:" << endl;
    for (i = 0; i < s; i++)
    {
        for (j = 0; j < ac; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    myclass obj;
    while (1)
    {
        int ch;
        cout << " 1 Addition of sparce matrix!!" << endl;
        cout << " 2 Simple transpose of sparce matrix!!" << endl;
        cout << " 3 Fast transpose of sparce matrix!!" << endl;
        cout << "ENTER YOUR CHOICE:";
        cin >> ch;

        switch (ch)
        {
        case 1:
            obj.get_sparse();
            obj.add_sparse();
            obj.display_addition();
            break;
        case 2:
            obj.transpose_input();
            obj.transpose();
            break;
        case 3:
            obj.transpose_input();
            obj.fast_transpose();
            break;
        default:
            cout << "please enter valid choice!!!" << endl;
        }
    }
    return 0;
}
