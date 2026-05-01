#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    bool sair = false; //variável que controla a execução do jogo (case 3);
    do
    {
        cout << "* * * * * * * * *\n"
             << "* Senha Univali *\n"
             << "* * * * * * * * *\n"
             << "*   1 - Jogar   *\n"
             << "*   2 - Sobre   *\n"
             << "*   3 - Sair    *\n"
             << "* * * * * * * * *\n"
             << "Escolha uma opção: ";
        int escolha=0;
        cin >> escolha; 
        switch (escolha) //loop que interage com o menu
        {
            case 1:
            {
                system("cls");
                int vidas = 10, senha;
                bool terminaJogo = false; //variáveis para encerramento do jogo.
                int a, b, c, d;  //sequência de números random para o jogador acertar.
                srand(time(NULL)); //seed do número random
                a = rand()%6+1; //atribuição inicial dos valores
                b = rand()%6+1;
                c = rand()%6+1;
                d = rand()%6+1;

                while (a==b || a==c || a==d || b==c || b==d || c==d) 
                {
                    a = rand()%6+1; //caso a atribuição inicial contenha repetições,
                    b = rand()%6+1; //entra em um loop até achar 4 valores distintos.
                    c = rand()%6+1;
                    d = rand()%6+1;
                }

                cout << "Bem-vindo(a) ao *Senha Univali*."
                     << "\nInsira uma sequência de 4 números entre 1 e 6 para tentar quebrar a senha gerada.\n";

                do //loop onde roda o desafio do jogo
                {
                    int posCorreta, numCorreto;
                    posCorreta=0;
                    numCorreto=0;
                    
                    if (vidas <= 0) //valida se o usuário tem tentativas restantes
                    {
                        system("cls");
                        cout << "Número de tentativas esgotadas, você perdeu!\n";
                        terminaJogo = true;
                        cout << "A senha gerada foi: [" << a << b << c << d << "].\n";
                        
                        cout << "Pressione \"Enter\" para retornar ao menu...";
                        cin.ignore();
                        cin.get();
                        system("cls");
                        break;

                    }

                    cout << "Insira a senha: "; //pega código do usuário e separa cada número em uma variável através de divisão e resto
                    cin >> senha; 
                    int n1 = senha / 1000;
                    int n2 = (senha / 100) % 10;
                    int n3 = (senha / 10) % 10;
                    int n4 = senha % 10;

                    while (n1<1 || n1>6 || n2<1 || n2>6 || n3<1 || n3>6 || n4<1 || n4>6)
                    {
                        cout << "Valor inválido, insira uma sequência de 4 números entre 1 e 6.\nSenha: ";
                        cin >> senha; //loop que valida se o usuário inseriu um número entre 1 a 6.
                        n1 = senha / 1000;
                        n2 = (senha / 100) % 10;
                        n3 = (senha / 10) % 10;
                        n4 = senha % 10;
                    }

                    vidas--; //com uma senha válida, desconta a tentativa atual e dá sequência.

                    if (n1==a && n2==b && n3==c && n4==d) //valida se o usuário acertou a senha.
                    {
                        cout << "Parabéns, você quebrou a senha na " << 10-vidas << "ª tentativa!\n"
                             << "A senha era: [" << a << b << c << d << "].\n";
                        terminaJogo = true;
                        
                        cout << "Pressione \"Enter\" para retornar ao menu...";
                        cin.ignore();
                        cin.get();
                        system("cls");
                        break;
                    }
                    
                    if (n1==a) //IFs de validação se o usuário acertar alguma posição e número.
                    {
                        posCorreta++; 
                        numCorreto++;
                    }

                    if (n2==b)
                    {
                        posCorreta++; 
                        numCorreto++;
                    } 
                    if (n3==c) 
                    {
                        posCorreta++; 
                        numCorreto++;
                    }
                    if (n4==d) 
                    {
                        posCorreta++; 
                        numCorreto++;
                    }
                    if (n1!=a && (n1==b || n1==c || n1==d)) numCorreto++; //IFs de validação se o usuário acertou algum número.
                    if (n2!=b && (n2==a || n2==c || n2==d)) numCorreto++; 
                    if (n3!=c && (n3==a || n3==b || n3==d)) numCorreto++;
                    if (n4!=d && (n4==a || n4==b || n4==c)) numCorreto++;

                    if (posCorreta==0 && numCorreto == 0) //IF de validação se nenhum dos números informados está correto.
                    {
                        cout << "Nenhum número está correto\n";
                    }
                    else
                    {
                        cout << posCorreta << " na posição correta, " << (numCorreto - posCorreta) << " correto(s) fora de posição.\n";
                    }
                    cout << "Tentativas restantes: " << vidas << "\n\n";

                } while (terminaJogo==false);
            }
            break;

            case 2:
            {
                system("cls");
                cout << "Alunos envolvidos:"
                     << "\n* * * * * * * * * * * * * * * * *"
                     << "\n*    Gabriel Batista da Luz     *"
                     << "\n*      Gabriel Dallagnoli       *"
                     << "\n*   Guilherme Figleski Anhaia   *"
                     << "\n*   Henrique Luiz Gallassini    *"
                     << "\n*      Hiago Ronaldo Gomes      *"
                     << "\n*    William Edward Bergmann    *"
                     << "\n* * * * * * * * * * * * * * * * *"
                     << "\nDisciplina: Algoritmos e programação (Turma 2, noturno)."
                     << "\nProfessor: Rafael Ballotin Martins."
                     << "\nTrabalho M2, segunda-feira, 11 de maio de 2026, Univali, Itajaí - SC."
                     << "\n* 100% livre de IA! *\n";
                
                cout << "Pressione \"Enter\" para retornar ao menu...";
                cin.ignore();
                cin.get();
                system("cls");
            }
            break;

            case 3:
            {
                system("cls");
                cout << "Saindo...";
                sair = true; //quebra do loop principal, encerrando o programa.
            }
            break;

            default:
            {
                system("cls");
                cout << "Opção inválida, pressione \"Enter\" para retornar ao menu...";
                cin.ignore();
                cin.get();
                system("cls");
            }
            break;
        }

    } while (sair==false);
    return 0;
}