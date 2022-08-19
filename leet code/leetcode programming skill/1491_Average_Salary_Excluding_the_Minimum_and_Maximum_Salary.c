

double average(int* salary, int salarySize){
   int maxsalary=salary[0],minisalary=salary[0];
    double average=0;
    for(int i=0;i<salarySize;i++)
    {
        if(salary[i]>maxsalary)
            maxsalary=salary[i];
        else if(salary[i]<minisalary)
            minisalary=salary[i];
        else
        {

        }
        average=average+salary[i];
    }
        average=average-(maxsalary+minisalary);
    average=average/(salarySize-2);
    return average;

}
