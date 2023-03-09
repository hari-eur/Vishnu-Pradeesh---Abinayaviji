#include<stdio.h>
int main()
{
  int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q;
  printf("------------SELECT THE BANK----\n");
  printf("\t  --1.SWISS BANK-------\n");
  printf("\t  --2.PANDIAN GRAMA BANK-------\n");
  printf("\t  --3.LACASE DE PAPEL------\n");
  printf("\t  --4.RESERVE BANK OF INDIA---\n");
  printf("\t-----ENTER YOUR CHOICE----\n");
  scanf("%d",&a);
  switch(a)
  {
    case 1:
      printf("--------YOU ENTERED IN SWISS BANK----\n");
      printf("-----------SELECT THE LIST OF OPERATION-----\n");
      printf("\t  --1.SAVINGS-------\n");
      printf("\t  --2.CURRENT-------\n");
      printf("\t  --3.DEMAT------\n");
      printf("\t----ENTER YOUR CHOICE----\n");
      scanf("%d",&b);
      switch(b)
      {
        case 1:
          printf("--------YOU ENTERED IN SWISS BANK -- SAVINGS-----\n");
          printf("\t----ENTER YOUR CHOICE----\n");
          printf("\t  --1.DEPOSIT-------\n");
      	  printf("\t  --2.WITHDRAW-------\n");
          scanf("%d",&c);
          switch(c){
          	case 1:
          		printf("--------YOU ENTERED IN SWISS BANK -- SAVINGS -- DEPOSIT-----\n");
          		int amount1 = 1000,fet1;
          		printf("THE AMOUNT IN SWISS BANK -- SAVINGS -- %d \n DEPOSIT THE AMOUNT -- ",amount1);
          		scanf("%d",fet1);
          		amount1 += fet1;
          		printf("THE UPDATED AMOUNT IS %d",amount1);
          		break;
          	case 2:
          		printf("--------YOU ENTERED IN SWISS BANK -- SAVINGS -- WITHDRAW-----\n");
          		int amount2 = 1000,fet2;
          		printf("THE AMOUNT IN SWISS BANK -- DEMAT -- %d \n WITHDRAW THE AMOUNT -- ",amount2);
          		scanf("%d",fet2);
          		amount2 -= fet2;
          		printf("THE UPDATED AMOUNT IS %d",amount2);
          		break;
          	default:
          		printf("-------WRONG OPTION ENTERED----------------------\n");
          		break;		
		  }
          break;
        case 2:
          printf("--------YOU ENTERED IN SWISS BANK -- CURRENT-----\n");
          printf("\t----ENTER YOUR CHOICE----\n");
          printf("\t  --1.DEPOSIT-------\n");
      	  printf("\t  --2.WITHDRAW-------\n");
          scanf("%d",&d);
          switch(d){
          	case 1:
          		printf("--------YOU ENTERED IN SWISS BANK -- CURRENT -- DEPOSIT-----\n");
          		int amount = 1500,fet;
          		printf("THE AMOUNT IN SWISS BANK -- CURRENT -- %d \n DEPOSIT THE AMOUNT -- ",amount);
          		scanf("%d",fet);
          		amount += fet;
          		printf("THE UPDATED AMOUNT IS %d",amount);
          		break;
          	case 2:
          		printf("--------YOU ENTERED IN SWISS BANK -- CURRENT -- WITHDRAW-----\n");
          		int amount1 = 1000,fet1;
          		printf("THE AMOUNT IN SWISS BANK -- CURRENT -- %d \n WITHDRAW THE AMOUNT -- ",amount1);
          		scanf("%d",fet1);
          		amount1 -= fet1;
          		printf("THE UPDATED AMOUNT IS %d",amount1);
          		break;
          	default:
          		printf("-------WRONG OPTION ENTERED----------------------\n");
          		break;		
		  }
          break;
        case 3:
          printf("--------YOU ENTERED IN SWISS BANK -- DEMAT-------\n");
          printf("\t----ENTER YOUR CHOICE----\n");
          printf("\t  --1.DEPOSIT-------\n");
      	  printf("\t  --2.WITHDRAW-------\n");
          scanf("%d",&e);
          switch(e){
          	case 1:
          		printf("--------YOU ENTERED IN SWISS BANK -- DEMAT -- DEPOSIT-----\n");
          		int amount = 1000,fet;
          		printf("THE AMOUNT IN SWISS BANK -- DEMAT -- %d \n DEPOSIT THE AMOUNT -- ",amount);
          		scanf("%d",fet);
          		amount += fet;
          		printf("THE UPDATED AMOUNT IS %d",amount);
          		break;
          	case 2:
          		printf("--------YOU ENTERED IN SWISS BANK -- DEMAT -- WITHDRAW-----\n");
          		int amount1 = 1000,fet1;
          		printf("THE AMOUNT IN SWISS BANK -- DEMAT -- %d \n WITHDRAW THE AMOUNT -- ",amount1);
          		scanf("%d",fet1);
          		amount1 -= fet1;
          		printf("THE UPDATED AMOUNT IS %d",amount1);
          		break;
          	default:
          		printf("-------WRONG OPTION ENTERED----------------------\n");
          		break;		
		  }
          break;
        default:
          printf("-------WRONG OPTION ENTERED----------------------\n");
          break;
      }
  case 2:
      printf("--------YOU ENTERED IN PANDIAN GRAMA BANK----\n");
      printf("-----------SELECT THE LIST OF OPERATION-----\n");
      printf("\t  --1.SAVINGS-------\n");
      printf("\t  --2.CURRENT-------\n");
      printf("\t  --3.DEMAT------\n");
      printf("\t----ENTER YOUR CHOICE----\n");
      scanf("%d",&f);
      switch(f)
      {
        case 1:
          printf("--------YOU ENTERED IN PANDIAN GRAMA BANK -- SAVINGS-----\n");
          printf("\t----ENTER YOUR CHOICE----\n");
          printf("\t  --1.DEPOSIT-------\n");
      	  printf("\t  --2.WITHDRAW-------\n");
          scanf("%d",&g);
          switch(g){
          	case 1:
          		printf("--------YOU ENTERED IN PANDIAN GRAMA BANK -- SAVINGS -- DEPOSIT-----\n");
          		int amount = 1000,fet;
          		printf("THE AMOUNT IN PANDIAN GRAMA BANK -- SAVINGS -- %d \n DEPOSIT THE AMOUNT -- ",amount);
          		scanf("%d",fet);
          		amount += fet;
          		printf("THE UPDATED AMOUNT IS %d",amount);
          		break;
          	case 2:
          		printf("--------YOU ENTERED IN PANDIAN GRAMA BANK -- SAVINGS -- WITHDRAW-----\n");
          		int amount1 = 1000,fet1;
          		printf("THE AMOUNT IN PANDIAN GRAMA BANK -- SAVINGS -- %d \n WITHDRAW THE AMOUNT -- ",amount1);
          		scanf("%d",fet1);
          		amount1 -= fet1;
          		printf("THE UPDATED AMOUNT IS %d",amount1);
          		break;
          	default:
          		printf("-------WRONG OPTION ENTERED----------------------\n");
          		break;		
		  }
        case 2:
          printf("--------YOU ENTERED IN PANDIAN GRAMA BANK -- CURRENT-----\n");
          printf("\t----ENTER YOUR CHOICE----\n");
          printf("\t  --1.DEPOSIT-------\n");
      	  printf("\t  --2.WITHDRAW-------\n");
          scanf("%d",&h);
          switch(h){
          	case 1:
          		printf("--------YOU ENTERED IN PANDIAN GRAMA BANK -- CURRENT -- DEPOSIT-----\n");
          		int amount = 1000,fet;
          		printf("THE AMOUNT IN PANDIAN GRAMA BANK -- CURRENT -- %d \n DEPOSIT THE AMOUNT -- ",amount);
          		scanf("%d",fet);
          		amount += fet;
          		printf("THE UPDATED AMOUNT IS %d",amount);
          		break;
          	case 2:
          		printf("--------YOU ENTERED IN PANDIAN GRAMA BANK -- CURRENT -- WITHDRAW-----\n");
          		int amount1 = 1000,fet1;
          		printf("THE AMOUNT IN PANDIAN GRAMA BANK -- CURRENT -- %d \n WITHDRAW THE AMOUNT -- ",amount1);
          		scanf("%d",fet1);
          		amount1 -= fet1;
          		printf("THE UPDATED AMOUNT IS %d",amount1);
          		break;
          	default:
          		printf("-------WRONG OPTION ENTERED----------------------\n");
          		break;		
		  }
        case 3:
          printf("--------YOU ENTERED IN PANDIAN GRAMA BANK -- DEMAT-------\n");
          printf("\t----ENTER YOUR CHOICE----\n");
          printf("\t  --1.DEPOSIT-------\n");
      	  printf("\t  --2.WITHDRAW-------\n");
          scanf("%d",&i);
          switch(i){
          	case 1:
          		printf("--------YOU ENTERED IN PANDIAN GRAMA BANK -- DEMAT -- DEPOSIT-----\n");
          		int amount = 1000,fet;
          		printf("THE AMOUNT IN PANDIAN GRAMA BANK -- DEMAT -- %d \n DEPOSIT THE AMOUNT -- ",amount);
          		scanf("%d",fet);
          		amount += fet;
          		printf("THE UPDATED AMOUNT IS %d",amount);
          		break;
          	case 2:
          		printf("--------YOU ENTERED IN PANDIAN GRAMA BANK -- DEMAT -- WITHDRAW-----\n");
          		int amount1 = 1000,fet1;
          		printf("THE AMOUNT IN PANDIAN GRAMA BANK -- DEMAT -- %d \n WITHDRAW THE AMOUNT -- ",amount1);
          		scanf("%d",fet1);
          		amount1 -= fet1;
          		printf("THE UPDATED AMOUNT IS %d",amount1);
          		break;
          	default:
          		printf("-------WRONG OPTION ENTERED----------------------\n");
          		break;		
		  }
		  default:
          printf("-------WRONG OPTION ENTERED----------------------\n");
          break;
  }
  
  	case 3:
      printf("--------YOU ENTERED IN LACASA DE PAPEL----\n");
      printf("-----------SELECT THE LIST OF OPERATION-----\n");
      printf("\t  --1.SAVINGS-------\n");
      printf("\t  --2.CURRENT-------\n");
      printf("\t  --3.DEMAT------\n");
      printf("\t----ENTER YOUR CHOICE----\n");
      scanf("%d",&j);
      switch(j)
      {
        case 1:
          printf("--------YOU ENTERED IN LACASA DE PAPEL -- SAVINGS-----\n");
          printf("\t----ENTER YOUR CHOICE----\n");
          printf("\t  --1.DEPOSIT-------\n");
      	  printf("\t  --2.WITHDRAW-------\n");
          scanf("%d",&k);
          switch(k){
          	case 1:
          		printf("--------YOU ENTERED IN LACASA DE PAPEL -- SAVINGS -- DEPOSIT-----\n");
          		int amount = 1000,fet;
          		printf("THE AMOUNT IN LACASA DE PAPEL -- SAVINGS -- %d \n DEPOSIT THE AMOUNT -- ",amount);
          		scanf("%d",fet);
          		amount += fet;
          		printf("THE UPDATED AMOUNT IS %d",amount);
          		break;
          	case 2:
          		printf("--------YOU ENTERED IN LACASA DE PAPEL -- SAVINGS -- WITHDRAW-----\n");
          		int amount1 = 1000,fet1;
          		printf("THE AMOUNT IN LACASA DE PAPEL -- SAVINGS -- %d \n WITHDRAW THE AMOUNT -- ",amount1);
          		scanf("%d",fet1);
          		amount1 -= fet1;
          		printf("THE UPDATED AMOUNT IS %d",amount1);
          		break;
          	default:
          		printf("-------WRONG OPTION ENTERED----------------------\n");
          		break;		
		  }
        case 2:
          printf("--------YOU ENTERED IN LACASA DE PAPEL -- CURRENT-----\n");
          printf("\t----ENTER YOUR CHOICE----\n");
          printf("\t  --1.DEPOSIT-------\n");
      	  printf("\t  --2.WITHDRAW-------\n");
          scanf("%d",&l);
          switch(l){
          	case 1:
          		printf("--------YOU ENTERED IN LACASA DE PAPEL -- CURRENT -- DEPOSIT-----\n");
          		int amount = 1000,fet;
          		printf("THE AMOUNT IN LACASA DE PAPEL -- CURRENT -- %d \n DEPOSIT THE AMOUNT -- ",amount);
          		scanf("%d",fet);
          		amount += fet;
          		printf("THE UPDATED AMOUNT IS %d",amount);
          		break;
          	case 2:
          		printf("--------YOU ENTERED IN LACASA DE PAPEL -- CURRENT -- WITHDRAW-----\n");
          		int amount1 = 1000,fet1;
          		printf("THE AMOUNT IN LACASA DE PAPEP -- CURRENT -- %d \n WITHDRAW THE AMOUNT -- ",amount1);
          		scanf("%d",fet1);
          		amount1 -= fet1;
          		printf("THE UPDATED AMOUNT IS %d",amount1);
          		break;
          	default:
          		printf("-------WRONG OPTION ENTERED----------------------\n");
          		break;		
		  }
        case 3:
          printf("--------YOU ENTERED IN LACASA DE PAPEL -- DEMAT-------\n");
          printf("\t----ENTER YOUR CHOICE----\n");
          printf("\t  --1.DEPOSIT-------\n");
      	  printf("\t  --2.WITHDRAW-------\n");
          scanf("%d",&m);
          switch(m){
          	case 1:
          		printf("--------YOU ENTERED IN LACASA DE PAPEL -- DEMAT -- DEPOSIT-----\n");
          		int amount = 1000,fet;
          		printf("THE AMOUNT IN LACASA DE PAPEL -- DEMAT -- %d \n DEPOSIT THE AMOUNT -- ",amount);
          		scanf("%d",fet);
          		amount += fet;
          		printf("THE UPDATED AMOUNT IS %d",amount);
          		break;
          	case 2:
          		printf("--------YOU ENTERED IN LACASA DE PAPEL -- DEMAT -- WITHDRAW-----\n");
          		int amount1 = 1000,fet1;
          		printf("THE AMOUNT IN LACASA DE PAPEL -- DEMAT -- %d \n WITHDRAW THE AMOUNT -- ",amount1);
          		scanf("%d",fet1);
          		amount1 -= fet1;
          		printf("THE UPDATED AMOUNT IS %d",amount1);
          		break;
          	default:
          		printf("-------WRONG OPTION ENTERED----------------------\n");
          		break;		
		  }
          default:
          printf("-------WRONG OPTION ENTERED----------------------\n");
          break;
  
}
	case 4:
      printf("--------YOU ENTERED IN RESERVE BANK OF BANK----\n");
      printf("-----------SELECT THE LIST OF OPERATION-----\n");
      printf("\t  --1.SAVINGS-------\n");
      printf("\t  --2.CURRENT-------\n");
      printf("\t  --3.DEMAT------\n");
      printf("\t----ENTER YOUR CHOICE----\n");
      scanf("%d",&n);
      switch(n)
      {
        case 1:
          printf("--------YOU ENTERED IN RESERVE BANK OF BANK -- SAVINGS-----\n");
          printf("\t----ENTER YOUR CHOICE----\n");
          printf("\t  --1.DEPOSIT-------\n");
      	  printf("\t  --2.WITHDRAW-------\n");
          scanf("%d",&o);
          switch(o){
          	case 1:
          		printf("--------YOU ENTERED IN RESERVE BANK OF BANK -- SAVINGS -- DEPOSIT-----\n");
          		int amount = 1000,fet;
          		printf("THE AMOUNT IN RESERVE BANK OF INDIA -- SAVINGS -- %d \n DEPOSIT THE AMOUNT -- ",amount);
          		scanf("%d",fet);
          		amount += fet;
          		printf("THE UPDATED AMOUNT IS %d",amount);
          		break;
          	case 2:
          		printf("--------YOU ENTERED IN RESERVE BANK OF BANK -- SAVINGS -- WITHDRAW-----\n");
          		int amount1 = 1000,fet1;
          		printf("THE AMOUNT IN RESERVE BANK OF INDIA -- SAVINGS -- %d \n WITHDRAW THE AMOUNT -- ",amount1);
          		scanf("%d",fet1);
          		amount1-= fet1;
          		printf("THE UPDATED AMOUNT IS %d",amount1);
          		break;
          	default:
          		printf("-------WRONG OPTION ENTERED----------------------\n");
          		break;		
		  }
        case 2:
          printf("--------YOU ENTERED IN RESERVE BANK OF BANK -- CURRENT-----\n");
          printf("\t----ENTER YOUR CHOICE----\n");
          printf("\t  --1.DEPOSIT-------\n");
      	  printf("\t  --2.WITHDRAW-------\n");
          scanf("%d",&p);
          switch(p){
          	case 1:
          		printf("--------YOU ENTERED IN RESERVE BANK OF BANK -- CURRENT -- DEPOSIT-----\n");
          		int amount = 1000,fet;
          		printf("THE AMOUNT IN RESERVE BANK OF INDIA -- CURRENT -- %d \n DEPOSIT THE AMOUNT -- ",amount);
          		scanf("%d",fet);
          		amount += fet;
          		printf("THE UPDATED AMOUNT IS %d",amount);
          		break;
          	case 2:
          		printf("--------YOU ENTERED IN RESERVE BANK OF BANK -- CURRENT -- WITHDRAW-----\n");
          		int amount1 = 1000,fet1;
          		printf("THE AMOUNT IN RESERVE BANK OF INDIA -- CURRENT -- %d \n WITHDRAW THE AMOUNT -- ",amount1);
          		scanf("%d",fet1);
          		amount1 -= fet1;
          		printf("THE UPDATED AMOUNT IS %d",amount1);
          		break;
          	default:
          		printf("-------WRONG OPTION ENTERED----------------------\n");
          		break;		
		  }
        case 3:
          printf("--------YOU ENTERED IN RESERVE BANK OF BANK -- DEMAT-------\n");
          printf("\t----ENTER YOUR CHOICE----\n");
          printf("\t  --1.DEPOSIT-------\n");
      	  printf("\t  --2.WITHDRAW-------\n");
          scanf("%d",&q);
          switch(q){
          	case 1:
          		printf("--------YOU ENTERED IN RESERVE BANK OF BANK -- DEMAT -- DEPOSIT-----\n");
          		int amount = 1000,fet;
          		printf("THE AMOUNT IN RESERVE BANK OF INDIA -- DEMAT -- %d \n DEPOSIT THE AMOUNT -- ",amount);
          		scanf("%d",fet);
          		amount += fet;
          		printf("THE UPDATED AMOUNT IS %d",amount);
          		break;
          	case 2:
          		printf("--------YOU ENTERED IN RESERVE BANK OF BANK -- DEMAT -- WITHDRAW-----\n");
          		int amount1 = 1000,fet1;
          		printf("THE AMOUNT IN RESERVE BANK OF INDIA -- DEMAT -- %d \n WITHDRAW THE AMOUNT -- ",amount1);
          		scanf("%d",fet1);
          		amount1 -= fet1;
          		printf("THE UPDATED AMOUNT IS %d",amount1);
          		break;
          	default:
          		printf("-------WRONG OPTION ENTERED----------------------\n");
          		break;		
		  }
}

}

  return 0;
}
