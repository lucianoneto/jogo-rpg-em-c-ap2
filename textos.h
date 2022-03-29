void introducao()
{
    printf("\nIntrodução : A Cripta!!!\n");
    printf("\n\n\nVocê acorda em um local desconhecido, sua cabeça dói e você se sente perdido.\n\nVocê andando lentamente avista uma figura que se aproxima . . .\n\nUma figura sombria encanpuzada, te encarando ... Você sente calafrios, então pergunta :\t-Quem é você? Que lugar é esse? Como vim parar aqui? \n\n");
    system("pause");
    system("cls");
    printf("\n\n\nO estranho devolve de maneira irônica : -A pergunta correta a se fazer é: Quem é você ... hahahaaha.... Bem Vindo a Cripta criança.\n");
    system("pause");
    system("cls");
    printf("\n\n\nVocê pensa consigo mesmo : -Realmente, quem sou eu...\tE se esforça para buscar em sua memória . . .");
    system("pause");
    system("cls");
    printf("\n\n*********************************************************************| CRIAÇÂO DE PERSONAGEM |*********************************************************************\n\n");
    system("pause");
    printf("\nSeleciona sua Classe :\n\n");
    printf("\n\n\n(1)- Guerreiro\n\n");
    printf("\n*Os Guerreiros possuem enormes habilidade no combate pelo fato de usarem uma espada e um escudo, fazendo com que sejam ofensivos até mesmo na defesa.\n");
    printf("\nAtaque [16.3] | Vida [130.2] | Armadura [10.1] | Habilidade [Usa seu escudo para atingir o inimigo] | Dano Habilidade [30.5] | Tempo de Recarga [3 Turnos]\n");
    printf("\n\n\n(2)- Arqueiro\n\n");
    printf("\n*Os Arqueiros possuem extrema velocidade em seu ataque, fazendo com que isso compense a sua fragilidade, extermina os inimigos facilmente.\n");
    printf("\nAtaque [14.9] | Vida [110.9] | Armadura [12.2] | Habilidade [Dá 3 rajadas rápidas de flechas] | Dano Habilidade [40.9] | Tempo de Recarga [2 Turnos]\n");
    printf("\n\n\n(3)- Berseker\n\n");
    printf("\n*Os Bersekers possuem ataques poderosos com seus machados, e também são um pouco resistentes, o que compensa a sua lentidão\n");
    printf("\nAtaque [18.1] | Vida [120.1] | Armadura [7.9] | Habilidade [Usa seu machado para um ataque forte] | Dano Habilidade [27.3] | Tempo de Recarga [4 Turnos]\n");
}
void criacaoraca()
{
    printf("\nSeleciona sua Raça :\n\n");
    printf("\n\n\n(1)- Humano\n\n");
    printf("\nOs Humanos possuem gostos, moral, costumes e hábitos variados. São acusados de possuírem pouco respeito pela historia. Mas é natural que os humanos, com sua vida relativamente curta e culturas em constante alteração, tenham uma memória coletiva menor do que os anões e os elfos.\nHabilidade única: 'Grito de guerra' que faz com que, ao utilizada, ganhe mais defesa e dano de ataque por 2 rodadas.\n");
    printf("\n\n\n(2)- Elfo\n\n");
    printf("\nOs Elfos amam a liberdade, a variedade e a auto-expressão. Eles tendem fortemente aos aspectos mais gentis do caos. Geralmente, valorizam e protegem a liberdade dos outros tão bem quanto a sua, sendo em sua maioria bondosos.\nHabilidade única: 'Energia astral', que faz com que zere o tempo de recarga da habilidade da classe do personagem.\n");
    printf("\n\n\n(3)- Anão\n\n");
    printf("\nOs Anões são reconhecidos por serem bons mineradores e mestres artífices. Eles são guerreiros indomáveis, fortes e resistentes. Os anões são reconhecidos facilmente pela altura, que não passa de um metro e meio.\nHabilidade única: 'Pulo de Odin', em que ele se arremessa no ar e atordoa o inimigo por 2 rodadas.\n");
}
void capitulo1_1()
{
    printf("\nCapítulo 1 : O Início de uma Jornada!!!\n");
    printf("\n*************************************************************| Agora sua jornada começa pela Cripta . . . |*************************************************************\n");
    printf("\nSem saber o porque de estar aqui, ou se quer como veio parar nesse lugar, ainda sente uma ligação com ele, algo de alguma forma no fundo dessa Cripta o chama, e você responde esse chamado . . .\n");
    printf("\nVocê olha para trás e vê a escada de onde veio, olha ao redor e percebe que está em uma espécie de grande salão com enormes colunas ornamentadas, porém estão bem desgastadas, parece abandonado... \n");
    printf("\nEntão você decide verificar a integridade de seus equipamentos : \n");
    system("pause");
    system("cls");
    printf("\nSua armadura e espada parecem intactos, algo sobre as escritas na lâmina da arma lhe da uma sensação de nostalgia ...\n\nVocê abre sua mochila e não encontra muito ...\n");
    printf("\nMOCHILA :\n");
    for (cont_mochila=0; cont_mochila<5; cont_mochila++)
        printf ("\t(%i)- %s\n",cont_mochila+1,mochila[cont_mochila]);
    printf("\nPor último encontra um objeto estranho em seu bolso, com um anel metálico em volta, e runas que não consegue compreender entalhadas em seu acabamento, tem uma vaga lembrança de que esse amuleto está relacionado com sua chegada a Cripta.\n");
    printf("\nApós checar seus equipamentos você estava comendo quando sente uma presença, então se vira. . .\n");
    system("pause");
    printf("\nUm goblim se egueirando para te pegar desprevinido, você se lança para o lado, se preparando para o combate, ele produz um barulho estridente com uma adaga em mãos vai para cima de você ...");
    system("pause");
    system("cls");
    strcpy(mochila[2],"Vazio");
}
void capitulo1_2()
{
    printf("\nAinda ofegante tenta se sintonizar com a realidade, e realiza que não poderá vacilar, não aqui, então se endireita tenta focar sua mente e segue em frente, para uma porta no final do salão ...\n");
    printf("\nVocê verifica a próxima sala... ela não é tão grande,percebe que existem coisas jogadas pelo chão mas parece livre, então atravessa a grande porta de metal...\n");
    system("pause");
    system("cls");
    printf("\nVasculhando o local, você encontra umas anotações perto de uma mochila rasgada, apesar de não entender o que significam, encontra um símbolo que se parece ser o número '4', e pensa o porque de aquilo estar ali...\n");
    printf("\nSaindo da sala segue para um corredor, as paredes de pedra parecem bem úmidas, o lugar é empoeirado e parece ter várias pilhas de ossos espalhadas.\n");
    printf("\nÉ perceptível que há algo errado com esse lugar, e você não está tão surpreso, esperava isso, só não pode dizer certamente o que foi fazer ali.");
    system("pause");
    system("cls");
    printf("\nCaminhando pelos longos corredores de pedra, com iluminação a base de tochas, você se depara com a entrada para uma sala ...\n");
    printf("\nDeseja entrar na sala ?\n");
    printf("\n\t(1)- Sim! \t (2)- Não!");
}
void capitulo1_3()
{
    printf("\nSaindo da sala você segue caminhando... O corredor começa a enlarguecer, e olhando para os lados vê diversas portas feitas de um metal enferrujando, no entanto não parece ser uma boa idéia explorar esse lugar...\n");
    printf("\nAtravés das grades das portas parece haver criaturas, é melhor não se arriscar, você segue sorrateiramente ... encontra diversos esqueletos pendurados ou pregados ao longo dessa sala que parece interminável ...\n");
    printf("\nSe esgueirando pelo lado direito da sala você enxerga movimentação do outro lado, então se esconde nas sombras de uma gigante coluna retangular...\n");
    system("pause");
    printf("\nNão consegue ver o que era, mas ja se foi, se sente aliviado ... no entanto quando você vai sair de cobertura percebe que o esqueleto escorado na parede ao seu lado está diferente, ele não está pendurado ...\n");
    printf("\nEle então grune e tenta te acertar com a espada em sua mão, por sorte você escapa dessa, mas agora precisa se defender . . .\n");
    system("pause");
    system("cls");
}
void capitulo1_4()
{
    printf("\nVocê ainda não pode parar pra ver seus itens devido ao perigo eminente, é preciso apenas seguir em frente...\n");
    printf("\nCom vida porém ameaçado nesse lugar você quer sair logo dali, é possível ver a saída, no entanto ...");
    printf("\nAparece um Goblin para atrapalhar sua saída!!!");
    system("pause");
    system("cls");
}
void capitulo1_5()
{
    printf("\nExiste uma espécie de diário no chão... você o pega...\n");
    system("pause");
    printf("\nNele você lê sobre um herói que tentou se aventurar por essa Cripta, e buscava algum objetivo no final dela, tem algo sobre um ciclo a ser quebrado, mas é difícil entender com as páginas tão mofadas...\n");
    printf("\nVocê começa a se lembrar... sua casa, seu lar, seus treinamentos com seu mestre, seus companheiros, sua vinda até a Cripta, e um branco...\n");
    system("pause");
    system("cls");
    printf("\n- É isso, eu tenho um propósito, eu preciso cumprir com as expectativas de meu mestre, preciso me tornar um herói, eu posso não lembrar de tudo ainda, mas vou até o fim disso, é o que esperam de mim...\n");
    printf("\nInspirado pelas memórias que retomou, você tem um senso de que é necessitado para alguma causa, as pessoas com as quais você se importa e se importam contigo dependem disso, você precisa ter sucesso...\n");
    system("pause");
    system("cls");
}
void capitulo2_1()
{
    printf("\nCapítulo 2 : Se aprofundando na Cripta!!!\n");
    printf("\n*************************************************************| Sua jornada continua no próximo nível da Cripta . . . |*************************************************************\n");
    printf("\n... Após continuar descendo na Cripta, você se encotra cada vez mais perto de seu objetivo final...\n");
}
void capitulo2_2()
{
    printf("\nContinuando a retomar suas memórias, você se lembra de seu mestre Hirko, que o treinou para que concluísse essa missão, mesmo sem lembrar de qual era e o porque, você sabe que as respotas estão aqui em algum lugar...\n");
    printf("\nVocê ja está caminhando a algum tempo, e desde que desceu mais na Cripta ela parece estar se modificando, as paredes de pedras cinzentas agora são blocos de calcário, tem areia pelo chão além de teias de aranha por todo lado.\n");
    printf("\nAparenta estar em uma catacumba, e desde que entrou está a caminhar com uma tocha para iluminar seu caminho...\n");
    system("pause");
    system("cls");
    printf("\nAgora descendo mais um lance de escadas você encontra escritas e desenhos que parecem contar uma história...\n");
    printf("\nNela um animal afugentado percorre uma floresta perdida, tentando encontrar uma saída, mas sempre volta ao mesmo local, com muito medo dos seus arredores, mas a única coisa que o persegue é sua própria sombra...\n");
    printf("\nIsso lhe ecoa na mente, mas não parece fazer muito sentido...\n");
    system("pause");
    system("cls");
    printf("\nEntão você decide partir, quando virando o final do corredor você enxerga uma sombra se mexendo e parece ser um inimigo, será melhor usar o elemento surpresa para ataca-lo ou tentar se esgueirar...\n");
    system("pause");
}
void capitulo2_3()
{
    printf("Você perdeu sua tocha graças a esse ocorrido, mas não foi um grande problema...\n");
    system("pause");
    system("cls");
    printf("\nDepois desse evento infortuno, você por sorte encontra uma tocha presa a parede, então pensa ser um bom momento para usar sua mochila agora que parece seguro e pegar a tocha para ajudar a iluniar o caminho...\n");
}
void capitulo2_4()
{
    printf("\nAgora pronto para seguir, com a tocha em mãos você segue andando pela Cripta...\n");
    system("pause");
    system("cls");
    printf("\nVocê encontra uma mochila perto a um cadaver, você primeiramente checa se ele está realmente morto e ele realmente aparenta estar... Então você vasculha a mochila...\n");
}
void capitulo2_5()
{
    printf("\nANOTAÇÕES: -...Então é preciso tomar cuidado, diversos desafios estão por vir... mas no final é preciso enfrentar... se não coseguir derrota-lo... Acho que estou ficando louco, tenho a impressão que é impossível sair daqui.\n");
    printf("\nVocê reflete sobre o que conseguiu ler, e lembra que de fato havia alguma obstáculo final a ser derrotado, seu mestre havia dito a ele -'...no final, algo o aguarda, você vai entender o real desafio quando alcançar teu objetivo...'.\n");
    printf("\nEntão você levanta e segue seu caminho...\n");
    system("pause");
    system("cls");
}
void enigma()
{
    printf("\nCaminhando pelos corredores você avista saida para uma área maior com tochas e grandes estátuas que aparentam ser egípcias\n");
    printf("\nVocê entra nessa nova sala, andando com cautela você atravessa entre as estátuas gigantes com labaredas de fogo até uma enorme porta que bloqueia seu caminho, e nela uma escrita...\n");
    printf("\nExiste também um mecanismo no chão de placa de pressão que quando você pisa uma estátua ao seu lado se vira para ti...\n");
    system("pause");
    printf("\n'Ao amanhecer, possuí quatro patas, ao entardecer apenas duas e ao anoitecer possuí três . . . ' \n");
    printf("\n -Uma charada..., eu ja escutei essa antes... preciso descobrir a resposta para seguir meu caminho...e algo me diz que é melhor eu não errar...\n");
    printf("\n -Patas... é provável que seja um animal...\n");
    printf("\n\t (1)- Esfinge! \t (2)- Macaco! \t (3)- Homem! \t (4)- Camelo! \t (5)- Cobra \t (6)- Falcão\n");
}
void fim_enigma()
{
    printf("\nAs portas se abrem e uma ventania passa por você... então, com sua tocha em mãos você segue pela porta e desce pela escadaria . . . \n");
    system("pause");
    system("cls");
}
void capitulo3_1()
{
    printf("\nCapítulo 3 : A descida para a escuridão!!!\n");
    printf("\n*************************************************************| Você continua a se aprofundar na Cripta . . . |*************************************************************\n");
    printf("\n... Você segue descendo nas profundezas da Cripta, saindo daquela área anterior sente que desafios maiores ainda estão por vir...\n");
    printf("\nEntão decide para um momento para repor as energias e olhar seu equipamento atual :\n");
}
void capitulo3_2()
{
    printf("\nDurante essa transição, você veio explorando os arredores e se depara com uma mesa de madeira que parecia ser de um alquimista...\n");
    system("pause");
    printf("\nVocê deseja interagir com ela, quem sabe não encontra uma poção...\n");
}
void capitulo3_3()
{
    printf("\nContinuando seu caminho é possível ver a mudança no cenário...\n");
    printf("\nAs paredes parecem o interior de uma caverna, o espaço aumentou relativamente, machas de sangues são frequentes, cabeças penduradas, alguns amuletos de adoração como ornametons improvisados com ossos e estacas de madeira...\n");
    system("pause");
    system("cls");
    printf("\nDerrepente uma lança é jogada em sua direção, você apenas tem tempo de sair em parte do caminho, tomando -20 de dano...\n");
    system("pause");
    vida_p-=20;
    printf("\nUm troll avança em sua direção com tudo empunhando um tronco gigante . . .\n");
    system("pause");
    system("cls");
}
void capitulo3_4()
{
    printf("\nOfegante após a luta, você procura um local para descansar... e percebe que existe uma abertura mais a frente...\n");
    printf("\nVocê entra e se senta, decide comer um pouco de comida que havia achado mais cedo...\n");
    system("pause");
    system("cls");
    printf("\nRefletindo um pouco sobre o que está acontecendo você vê mensagens de socorro nas paredes marcadas a sangue...\n");
    printf("\nVocê tenta manter sua cabeça centrada no objetivo, mas até isso começa a ser duvidoso para ti... parece que um incerteza começa a tomar conta de ti...\n");
    system("pause");
    system("cls");
    printf("\n -Preciso continuar, preciso chegar ao final, não importa o que eu pense, tenho que fazer isso por eles...\n");
    printf("\nMas até sobre 'eles',as pessoas das quais você se importa, você começa a se questionar, será que realmente vale a pena levar isso adiante por conta deles, você nem sabe aonde quer chegar...\n");
    system("pause");
    system("cls");
    printf("\nSe levantando, você repara em um tipo de altar de adoração e decide verifica-lo...\n");
    printf("\nEle é constituido de madeiras e cordas que amarram ossos a ele, num formato bem estranho, com um desenho ao fundo, parece ser para alguma divindade...\n");
    printf("\nCertamente pertence as criaturas aqui embaixo, será que deve interagir com isso . . .\n");
}
void capitulo3_5()
{
    printf("\nSaindo do lugar onde você estava, você escuta um barulho estranho se aproximando, quando percebe um bando de orcs correndo pelo corredor vão na sua direção ...\n");
    printf("\nA unica opção a correr, então você guarda sua espada e começa a correr o mais rápido possível...\n");
    system("pause");
    system("cls");
    printf("\nPassa por diversas salas e objetos estranhos, virando nas curvas que encontra, até chegar a uma pilha de corpos numa entrada estranha, e tem a chance de se esconder ali...\n");
    printf("\nVocê não conseguiria correr mais, então sem pensar entra passa pelas teias entra ali e entra na pilha tentando ficar imóvel, o bando passa por ali, o chão treme...\n");
    system("pause");
    system("cls");
    printf("\nQuando a área parece estar livre de inimigos você sai da pilha de corpos, porém o local parecia o covil de uma aranha...\n");
    printf("\nEla desce do teto e cai entre você e a saída, ela parece diferente, bem maior que outras aranhas vai ser preciso tomar um cuidado extra . . .\n");
}
void capitulo3_6()
{
    printf("A luta contra a Aranha Gigante dropou o Peitoral de Mithril, que aumentou sua defesa em 2, sua defesa agora é de %.2f\n",defesa_p);
    system("pause");
    system("cls");
    printf("\nAinda meio tonto, você sai do covil da aranha e segue para uma escadaria de pedregulhos que leva para baixo...\n");
    printf("\nAo final do corredor que você se esncontra existe um outro altar, esse parece diferente dos outros... existem escritas nele e em volta, porém você não as entende...\n");
    printf("\nExistem dois buracos, que são possíveis de colocar a mão . . .\n");
}
void capitulo3_7()
{
    printf("\n... Após mais um período de caminhada você se depara com uma porta de madeira em seu caminho...\n");
    system("pause");
    printf("\nVocê olha pelo buraco da fechadura e vê um orc dentro da sala, mas também alguns livros em cima de uma mesa que te chamam a atenção, eles podem te ajudar nessa jornada ...\n");
    printf("\nEntão você empunha sua arma, e chuta com tudo a porta, e avnça em direção ao orc . . .\n");
    system("pause");
    system("cls");
}
void capitulo3_8()
{
    printf("\nCom o orc derrotado você consegue ler os livros em segurança...\n");
    system("pause");
    printf("\nNeles voê encontra anotações sobre seu amuleto, o que te trouxe a Cripta, ele é uma espécie de chave, que da a direção a ela...\n");
    printf("\nEntão você se recorda de seu mestre, Hiroko, que lhe entregou esse amuleto quando se formou um guerreiro a muito tempo atrás... então retoma um pouco de confiança e segue seu caminho...\n");
    printf("\nÉ perceptível que o objetivo final está próximo, então você tenta se manter firme para o que vier...\n");
    system("pause");
    system("cls");
    printf("\nFinalmente você chega a uma grande abertura onde um portão com grades de ferro está levantado, quando você passa por ele, eles se fecham...\n");
    system("pause");
    printf("\nAdentrando esse local escuro, você perde noção de tempo, de tato, de audição...\n");
    printf("\nUm urro o surpreende e ecoa em toda sua mente, como se alguém gritasse dentro de sua cabeça... você cai no chão, mas rapidamente se levanta...\n");
    printf("\nEncontra uma pequena abertura que a luz conseguia passar, então é uma boa oportunidade de usar sua mochila antes de continuar...\n");
}
void capitulo_final()
{
    printf("\nChegando no fim da Cripta, você se depara com um gigante que estava aguardando na saída, e a única maneira de passar por ele é derrotando-o.\n");
    printf("\nCapítulo Final : O Confronto com seu objetivo final!!!\n");
    printf("\n*************************************************************| ? ? ? |*************************************************************\n");
    printf("\nSem saber o que esperar do que está por vir, você pensa que vai poder finalmente sair desse lugar assim que acabar, que todo o sofrimento vai ter fim...\n");
    printf("\nVocê não se sente mais tanto um herói da história mas sim uma pessoa infortuna...\n");
    system("pause");
    printf("\nSua cabeça começa a embaralhar e você tem a sensação de dejavu, como se ja tivesse estado ali antes . . .\n");
    system("pause");
    system("cls");
    printf("\nMas você vai ao final disso, então no final da escada, você caminha pelo corredor que aumenta... chegando a uma enorme abertura onde você avista um mostro gigante e deformado no que parece ser um enorme foço...\n");
    printf("\nVocê tenta focar sua mente que parece quebrada e parte para o confronto . . .\n");
    system("pause");
    system("cls");
    printf("\n\n*******************************************************************| O GUARDIÃO |*******************************************************************\n\n");
    printf("\nO guardião se levanta e ruge ...\n");
    printf("\n -O que veio fazer aqui?\n");
    printf("\nVocê sente um calafrio e responde :\n");
    printf("\n -Vim acabar com isso!\n");
    printf("\nO guardião ri.....\n");
    printf("\n- Hahahahah.... Acha que pode me derrotar? Você sabe muito bem o que vai acontecer, isso nunca vai acabar... Esse lugar é amaldiçoado, eu sou amaldiçoado... você é amaldiçoado . . . \n");
    printf("\nPor final, você responde e parte pra cima...\n");
    printf("\n -Só sei que tenho que tentar... eu não vou desistir!\n");
}
void texto_final ()
{
    printf("\nNo mesmo momento em que o corpo do BOSS se dissolve, cai um papel com o número '9', fazendo uma conexão com o '4' que havia encontrado no começo do jogo.\n");
    system("pause");
    system("cls");
    printf("\nAgora, tudo fazia sentido, enquanto você era sugado para uma luz tão brilhante que não conseguia ver nada... você se realiza...\n");
    printf("\nEsses confrontos, esses desafios, essa Cripta, tudo isso que você passou... toda essa luta é algo teu, sua luta constante, com você mesmo, sua luta com sua mente, sua Cripta . . .\n");
    printf("\nEntão, você é levado de volta...\n");
}
