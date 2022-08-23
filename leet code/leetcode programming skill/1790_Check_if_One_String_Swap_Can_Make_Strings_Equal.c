
bool areAlmostEqual(char * s1, char * s2){
    if(strcmp(s1,s2)==0)
        return true;
    char temp='\0';
    for(int i=0;s2[i]!='\0';i++)
    {for(int j=i;s2[j]!='\0';j++)
    {

        temp=s2[j];
                s2[j]=s2[i];
            s2[i]=temp;

        if(!strcmp(s1,s2))
            return true;
        else{
              temp=s2[j];
                s2[j]=s2[i];
            s2[i]=temp;

        }

    }



    }
return false;
}
