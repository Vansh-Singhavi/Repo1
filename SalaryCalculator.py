def computeSalary( basic, grade):
     
    hra = 0.2 * basic
    da = 0.5 * basic
    pf = 0.11 * basic
     
    if grade == 'A' :
        allowance = 1700.0
        
    elif grade == 'B' :
        allowance = 1500.0
        
    elif grade == 'C' :
        allowance = 1300.0
     
    gross = basic + hra + da + allowance - pf
                     
    return gross
     
basic = int(input("Enter the basic salary : "))
grade = "  ";
while(len(grade) > 1 and (grade > 'C' or grade < 'A')) :
	grade = input("Enter the grade : ")
	
print(computeSalary(basic, grade));
