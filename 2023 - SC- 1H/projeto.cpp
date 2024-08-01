
#include<stdio.h>
float proces,placam,drivers,video,driversresultado,horas,totalkws,totalw,custo,custom;
main(){
printf("Esse aplicativo faz o calculo do consumo do seu PC, com base dos seus TDP\n");
printf("Digite:\n");	
printf("O TDP do processador:");
scanf("%f",&proces);
printf("O TDP da placa mae:");
scanf("%f",&placam);
printf("O TDP do placa de video:");
scanf("%f",&video);
printf("Quantas memorias drivers voce tem ?(exemplo CD/DVDs/Bluray e HDs e SSDs )\n");
scanf("%f",&drivers);

printf("Quantas horas voce utiliza o seu computador?\n");
scanf("%f",&horas);
driversresultado = drivers*25.0;
totalw=(proces+placam+video+driversresultado);
totalkws=(totalw/1000.0)*horas;
printf("Voce gasta um total de %.2f W\n",totalw);
custo=totalkws*0.82;
custom=custo*30;
printf("Voce gasta o total de %.2f KwsH \n",totalkws);

printf("Voce gasta R$%.2f por dia\n",custo);

printf("Voce gasta R$%.2f por mes\n",custom);

 getchar();

}
