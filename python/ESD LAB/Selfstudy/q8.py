import numpy as np
data_type = [('name','S15'),('class_',int),('height',float)]

student_details = [('Ram',5,150),('Sham',6,165),('liam',6,155),('shyam',5,145)]

students = np.array(student_details , dtype=data_type)
print("Original array:")
print(students)

print("Sort by class_")
students_sorted=(np.sort(students,order='class_'))
print(students_sorted)

key=lambda x: x[1]

print(sorted(students_sorted,key=lambda x:x[2]))

