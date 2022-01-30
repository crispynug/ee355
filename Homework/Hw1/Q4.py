#tuples dictionary
students_grades_t = dict([('Asiel', 95),( 'Chris', 67),('Pj',85),('Sebastatin',92)])

print("tuples dictionary:", students_grades_t)
print("Chris' grade:", students_grades_t['Chris'])



#lists dictionary
students = ['Asiel','Chris', 'Pj','Sebastian']
grades = [95,67,85,92]
students_grades_l = dict(zip(students,grades))
print("lists dictionary: ",students_grades_l)
print("Chris' grade:", students_grades_l['Chris'])
