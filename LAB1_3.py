# LAB : 1 TASK: 3

studentName = input("Please enter your name...")
lab_grade = int(input("Please enter your lab grade..."))
midterm_grade = int(input("Please enter your midterm grade..."))
final_grade = int(input("Please enter your final grade..."))

last_score=(lab_grade*0.25)+(midterm_grade*0.35)+(final_grade*0.4)


print(f'Name : {studentName}')
print(f'Lab : {lab_grade}')
print(f'Midterm: {midterm_grade}')
print(f'Final : {final_grade}')
print(f'Last Score : {last_score}')