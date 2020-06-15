#include <iostream>

using namespace std;

//RA: 2840482011008.
//Nome: Pedro Henrique Avelar Curiel.
//Senha do modo ADM: alpp1.
//Faturamento possível: R$ 247,50.

int main(){
    string senha;
    char fim;
    int add, escolha, escolha_adm;
    float valor_inserido, troco, faturamento;
    float prod[10] = {4, 3.5, 3.5, 3.5, 3.5, 6, 6.5, 6, 6.5, 6.5};
    int estoque[10] = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    float soma;
    
    faturamento = 0;
    troco = 0;
    soma = 0;

    senha = "alpp1";

    do{
    cout << "Escolha uma das opções, digite 0 para modo ADM: " << endl;
    cout << "[1]Coca-Cola.................R$ 4,00" << endl;
    cout << "[2]Sprite....................R$ 3,50" << endl;
    cout << "[3]Guaraná...................R$ 3,50" << endl;
    cout << "[4]Fanta Laranja.............R$ 3,50" << endl;
    cout << "[5]Pepsi.....................R$ 3,50" << endl;
    cout << "[6]Baconzitos................R$ 6,00" << endl;
    cout << "[7]Fandangos.................R$ 6,50" << endl;
    cout << "[8]Cebolitos.................R$ 6,00" << endl;
    cout << "[9]Ruffles...................R$ 6,50" << endl;
    cout << "[10]Chettos..................R$ 6,50" << endl;
    cin >> escolha;
    
        if (escolha == 0){
            cout << "Digite a senha de Administrador: " << endl;
            cin >> senha;
            if (senha == "alpp1"){
                cout << "[1] Adicionar produtos" << endl;
                cout << "[2] Listar produtos" << endl;
                cout << "[3] Ver faturamento" << endl;
                cout << "[4] Quanto pode faturar" << endl;
                cin >> escolha_adm;
                if (escolha_adm == 1){
                    cout << "Qual produto você quer adicionar?" << endl;
                    cout << "[1]Coca-Cola" << endl;
                    cout << "[2]Sprite" << endl;
                    cout << "[3]Guaraná" << endl;
                    cout << "[4]Fanta Laranja" << endl;
                    cout << "[5]Pepsi" << endl;
                    cout << "[6]Baconzitos" << endl;
                    cout << "[7]Fandangos" << endl;
                    cout << "[8]Cebolitos" << endl;
                    cout << "[9]Ruffles" << endl;
                    cout << "[10]Chettos" << endl;
                    cin >> add;
                    if (add == 1){
                        estoque[0]++;
                    }
                    else {
                        if (add == 2){
                            estoque[1]++;
                        }
                        else {
                            if (add == 3){
                                estoque[2]++;
                            }
                            else {
                                if (add == 4){
                                    estoque[3]++;
                                }
                                else {
                                    if (add == 5){
                                        estoque[4]++;
                                    }
                                    else {
                                        if (add == 6){
                                            estoque[5]++;
                                        }
                                        else {
                                            if (add == 7){
                                                estoque[6]++;
                                            }
                                            else {
                                                if (add == 8){
                                                    estoque[7]++;
                                                }
                                                else {
                                                    if (add == 9){
                                                        estoque[8]++;
                                                    }
                                                    else {
                                                        if (add == 10){
                                                            estoque[9]++;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                else {
                    if (escolha_adm == 2){
                        cout << "Coca-Cola: " << estoque[0] << endl;
                        cout << "Sprite: " << estoque[1] << endl;
                        cout << "Guaraná: " << estoque[2] << endl;
                        cout << "Fanta Laranja: " << estoque[3] << endl;
                        cout << "Pepsi: " << estoque[4] << endl;
                        cout << "Baconzitos: " << estoque[5] << endl;
                        cout << "Fandangos: " << estoque[6] << endl;
                        cout << "Cebolitos: " << estoque[7] << endl;
                        cout << "Ruffles: " << estoque[8] << endl;
                        cout << "Chettos: " << estoque[9] << endl;
                    }
                    else {
                        if (escolha_adm == 3){
                            cout << "R$ " << faturamento - troco << endl;
                        }
                        else {
                            if(escolha_adm == 4){
                                cout << "Ainda pode faturar R$ " << 247.5 - faturamento - troco << endl;
                            }
                        }
                    }
                }
            }
        }
        else {
            if (escolha == 1){
                cout << "Você selecionou Coca-Cola." << endl;
                cout << "Insira o valor correspondente ao produto: ";
                cin >> valor_inserido;
                if (valor_inserido < prod[0]){
                    soma = valor_inserido + soma;
                    do {
                    cout << "Valor insuficiente!. Insira o restante do dinheiro: ";
                    cin >> valor_inserido;
                    soma = valor_inserido + soma;
                    } while (soma < prod[0]);
                    troco = soma - prod[0];
                    cout << "Seu troco é de R$ " << troco << endl;
                }
                else {
                troco = valor_inserido - prod[0];
                cout << "Seu troco é de R$ " << troco << endl;
                estoque[0]--;
                }
            }
            else {
                if (escolha == 2){
                    cout << "Você selecionou Sprite." << endl;
                    cout << "Insira o valor correspondente ao produto: ";
                    cin >> valor_inserido;
                    if (valor_inserido < prod[1]){
                        soma = valor_inserido + soma;
                        do {
                        cout << "Valor insuficiente!. Insira o restante do dinheiro: ";
                        cin >> valor_inserido;
                        soma = valor_inserido + soma;
                        } while (soma < prod[1]);
                        troco = soma - prod[1];
                        cout << "Seu troco é de R$ " << troco << endl;
                    }
                    else {
                    troco = valor_inserido - prod[1];
                    cout << "Seu troco é de R$ " << troco << endl;
                    estoque[1]--;
                    }
                }
                else {
                    if (escolha == 3){
                        cout << "Você selecionou Guaraná." << endl;
                        cout << "Insira o valor correspondente ao produto: ";
                        cin >> valor_inserido;
                        if (valor_inserido < prod[2]){
                            soma = valor_inserido + soma;
                            do {
                            cout << "Valor insuficiente!. Insira o restante do dinheiro: ";
                            cin >> valor_inserido;
                            soma = valor_inserido + soma;
                            } while (soma < prod[2]);
                            troco = soma - prod[2];
                            cout << "Seu troco é de R$ " << troco << endl;
                        }
                        else {
                        troco = valor_inserido - prod[2];
                        cout << "Seu troco é de R$ " << troco << endl;
                        }
                    }
                    else {
                        if (escolha == 4){
                            cout << "Você selecionou Fanta Laranja." << endl;
                            cout << "Insira o valor correspondente ao produto: ";
                            cin >> valor_inserido;
                            if (valor_inserido < prod[3]){
                                soma = valor_inserido + soma;
                                do {
                                cout << "Valor insuficiente!. Insira o restante do dinheiro: ";
                                cin >> valor_inserido;
                                soma = valor_inserido + soma;
                                } while (soma < prod[3]);
                                troco = soma - prod[3];
                                cout << "Seu troco é de R$ " << troco << endl;
                            }
                            else {
                            troco = valor_inserido - prod[3];
                            cout << "Seu troco é de R$ " << troco << endl;
                            estoque[3]--;
                            }
                        }
                        else {
                            if (escolha == 5){
                                cout << "Você selecionou Pepsi." << endl;
                                cout << "Insira o valor correspondente ao produto: ";
                                cin >> valor_inserido;
                                if (valor_inserido < prod[4]){
                                    soma = valor_inserido + soma;
                                    do {
                                    cout << "Valor insuficiente!. Insira o restante do dinheiro: ";
                                    cin >> valor_inserido;
                                    soma = valor_inserido + soma;
                                    } while (soma < prod[4]);
                                    troco = soma - prod[4];
                                    cout << "Seu troco é de R$ " << troco << endl;
                                }
                                else {
                                troco = valor_inserido - prod[4];
                                cout << "Seu troco é de R$ " << troco << endl;
                                estoque[4]--;
                                }
                            }
                            else {
                                if (escolha == 6){
                                    cout << "Você selecionou Baconzitos." << endl;
                                    cout << "Insira o valor correspondente ao produto: ";
                                    cin >> valor_inserido;
                                    if (valor_inserido < prod[5]){
                                        soma = valor_inserido + soma;
                                        do {
                                        cout << "Valor insuficiente!. Insira o restante do dinheiro: ";
                                        cin >> valor_inserido;
                                        soma = valor_inserido + soma;
                                        } while (soma < prod[5]);
                                        troco = soma - prod[5];
                                        cout << "Seu troco é de R$ " << troco << endl;
                                    }
                                    else {
                                    troco = valor_inserido - prod[5];
                                    cout << "Seu troco é de R$ " << troco << endl;
                                    estoque[5]--;
                                    }
                                }
                                else {
                                    if (escolha == 7){
                                        cout << "Você selecionou Fandangos." << endl;
                                        cout << "Insira o valor correspondente ao produto: ";
                                        cin >> valor_inserido;
                                        if (valor_inserido < prod[6]){
                                            soma = valor_inserido + soma;
                                            do {
                                            cout << "Valor insuficiente!. Insira o restante do dinheiro: ";
                                            cin >> valor_inserido;
                                            soma = valor_inserido + soma;
                                            } while (soma < prod[6]);
                                            troco = soma - prod[6];
                                            cout << "Seu troco é de R$ " << troco << endl;
                                        }
                                        else {
                                        troco = valor_inserido - prod[6];
                                        cout << "Seu troco é de R$ " << troco << endl;
                                        estoque[6]--;
                                        }
                                    }
                                    else {
                                        if (escolha == 8){
                                            cout << "Você selecionou Cebolitos." << endl;
                                            cout << "Insira o valor correspondente ao produto: ";
                                            cin >> valor_inserido;
                                            if (valor_inserido < prod[7]){
                                                soma = valor_inserido + soma;
                                                do {
                                                cout << "Valor insuficiente!. Insira o restante do dinheiro: ";
                                                cin >> valor_inserido;
                                                soma = valor_inserido + soma;
                                                } while (soma < prod[7]);
                                                troco = soma - prod[7];
                                                cout << "Seu troco é de R$ " << troco << endl;
                                            }
                                            else {
                                            troco = valor_inserido - prod[7];
                                            cout << "Seu troco é de R$ " << troco << endl;
                                            estoque[7]--;
                                            }
                                        }
                                        else {
                                            if (escolha == 9){
                                                cout << "Você selecionou Ruffles." << endl;
                                                cout << "Insira o valor correspondente ao produto: ";
                                                cin >> valor_inserido;
                                                if (valor_inserido < prod[8]){
                                                    soma = valor_inserido + soma;
                                                    do {
                                                    cout << "Valor insuficiente!. Insira o restante do dinheiro: ";
                                                    cin >> valor_inserido;
                                                    soma = valor_inserido + soma;
                                                    } while (soma < prod[8]);
                                                    troco = soma - prod[8];
                                                    cout << "Seu troco é de R$ " << troco << endl;
                                                }
                                                else {
                                                troco = valor_inserido - prod[8];
                                                cout << "Seu troco é de R$ " << troco << endl;
                                                estoque[8]--;
                                                }
                                            }
                                            else {
                                                if (escolha == 10){
                                                    cout << "Você selecionou Chettos." << endl;
                                                    cout << "Insira o valor correspondente ao produto: ";
                                                    cin >> valor_inserido;
                                                    if (valor_inserido < prod[9]){
                                                        soma = valor_inserido + soma;
                                                        do {
                                                        cout << "Valor insuficiente!. Insira o restante do dinheiro: ";
                                                        cin >> valor_inserido;
                                                        soma = valor_inserido + soma;
                                                        } while (soma < prod[9]);
                                                        troco = soma - prod[9];
                                                        cout << "Seu troco é de R$ " << troco << endl;
                                                    }
                                                    else {
                                                    troco = valor_inserido - prod[9];
                                                    cout << "Seu troco é de R$ " << troco << endl;
                                                    estoque[9]--;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }  
            }
        }
        faturamento += soma;
        cout << "Deseja finalizar o programa? (S/N)" << endl;
        cin >> fim;
    } while (fim == 'N'||fim == 'n');
    return 0;
}