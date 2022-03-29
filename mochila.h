int mochila123()
{
    item_escolha=0;
    for (cont_mochila=0; cont_mochila<5; cont_mochila++)
        if (strcmp(mochila[cont_mochila],"Vazio")==0)
            teste_mochila++;
    if (teste_mochila==5)
    {
        printf("\nVocê não possuí nenhum item!\n");
        item_escolha++;
        pre_teste=1;
        //Voltar para escolha de ação
    }
    if (pre_teste!=1)
    {
        do
        {
            do
            {
                teste_mochila=0;
                printf("\nMOCHILA :\n");
                for (cont_mochila=0; cont_mochila<5; cont_mochila++)
                    printf ("\t(%i)- %s\n",cont_mochila+1,mochila[cont_mochila]);
                printf("\n (6)- Sair da Mochila!\n");
                printf("\nSelecione algum item que deseja utilizar ...\n\n");
                setbuf(stdin,NULL);
                scanf("%c",&cont_mochila_char);
                cont_mochila_char--;
                if (cont_mochila_char=='0')
                {
                    cont_mochila=0;
                    char_int++;
                }
                else if (cont_mochila_char=='1')
                {
                    cont_mochila=1;
                    char_int++;
                }
                else if (cont_mochila_char=='2')
                {
                    cont_mochila=2;
                    char_int++;
                }
                else if (cont_mochila_char=='3')
                {
                    cont_mochila=3;
                    char_int++;
                }
                else if (cont_mochila_char=='4')
                {
                    cont_mochila=4;
                    char_int++;
                }
                else if (cont_mochila_char=='5')
                {
                    system("cls");
                    printf("\nSaindo da mochila...\n");
                    char_int++;
                    item_escolha++;
                    system("PAUSE");
                }
                else
                {
                    system("cls");
                    printf("\nEscolha um item válido!\n");
                    system("pause");
                    system("cls");
                }
            }
            while(char_int==0);
            ///////////////////////////////////////////////////////////////////////////////////////////////////////
            if(cont_mochila_char!='5')
            {
                if (strcmp(mochila[cont_mochila],"Vazio")==0)
                {
                    system("cls");
                    printf("\nSlot selecionado está vazio.\n");
                    system("pause");
                    system("cls");
                }
                else if (strcmp(mochila[cont_mochila],"Poção de Vida Pequena")==0)
                {
                    printf("\nPoção de Vida Pequena utilizada, +30 de vida ...\n");
                    for (cont_mochila2=0; cont_mochila2<30; cont_mochila2++)
                        if (vida_p<vida_pmax)
                            vida_p++;
                    printf("\nSua vida atual é %.2f .\n",vida_p);
                    strcpy(mochila[cont_mochila],"Vazio");
                    item_escolha++;
                }
                else if (strcmp(mochila[cont_mochila],"Poção de Vida Média")==0)
                {
                    printf("\nPoção de Vida Média utilizada, +50 de vida ...\n");
                    for (cont_mochila2=0; cont_mochila2<50; cont_mochila2++)
                        if (vida_p<vida_pmax)
                            vida_p++;
                    printf("\nSua vida atual é %.2f .\n",vida_p);
                    strcpy(mochila[cont_mochila],"Vazio");
                    item_escolha++;
                }
                else if (strcmp(mochila[cont_mochila],"Poção de Vida Grande")==0)
                {
                    printf("\nPoção de Vida Grande utilizada, +70 de vida ...\n");
                    for (cont_mochila2=0; cont_mochila2<70; cont_mochila2++)
                        if (vida_p<vida_pmax)
                            vida_p++;
                    printf("\nSua vida atual é %.2f .\n",vida_p);
                    strcpy(mochila[cont_mochila],"Vazio");
                    item_escolha++;
                }
                else if (strcmp(mochila[cont_mochila],"Poção de Recuperação Completa")==0)
                {
                    printf("\nPoção de Recuperação Completa utilizada, seu personagem está com a vida máxima agora...\n");
                    vida_p=vida_pmax;
                    printf("\nSua vida atual é %.2f .\n",vida_p);
                    strcpy(mochila[cont_mochila],"Vazio");
                    item_escolha++;
                }
                else if (strcmp(mochila[cont_mochila],"Poção de Dano")==0)
                {
                    printf("\nPoção de Dano utilizada, seu personagem possuí +2 de dano em seus ataques normais até o final da luta...\n");
                    cont_pot_dano++;
                    printf("\nSeu ataque era de %.2f e agora é %.2f .\n",ataque_p,ataque_p+2);
                    ataque_p+=2;
                    strcpy(mochila[cont_mochila],"Vazio");
                    item_escolha++;
                }
                else if (strcmp(mochila[cont_mochila],"Poção de Defesa")==0)
                {
                    printf("\nPoção de Defesa utilizada, seu personagem possuí +2 de defesa até o final da luta ...\n");
                    cont_pot_defesa++;
                    printf("\nSua defesa era de %.2f agora é %.2f .\n",defesa_p,defesa_p+2);
                    defesa_p+=2;
                    strcpy(mochila[cont_mochila],"Vazio");
                    item_escolha++;
                }
            }
        }
        while (item_escolha==0);
    }
}
void pot_cont()
{
    while (cont_pot_dano>0)
    {
        cont_pot_dano--;
        ataque_p-=2;
    }
    while (cont_pot_defesa>0)
    {
        cont_pot_dano--;
        ataque_p-=2;
    }
}
void add_mochila(char *item)
{
    do
    {
        if (cont_item>=5)
        {
            printf("\nTodos os espaços da mochila estão cheios!\n");
            add_item++;
        }
        else if (strcmp(mochila[cont_item],"Vazio")==0)
        {
            strcpy(mochila[cont_item],item);//item que vai ser recebido
            add_item++;
        }
        cont_item++;
    }
    while (add_item==0);
    add_item=0;
    cont_item=0;
}
