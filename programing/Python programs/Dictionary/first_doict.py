stud = {
    "jeevan":78,
    "sagar":76,
    "om":98,
    "adesh":90,
    "shubham":87
}

stud.update({"jeevan":99, "gotya":100})
print(stud.items())
#print("\n")
print(stud.keys())
print(stud.values())
print(type(stud))

print(stud.get("jeevan"))   #none
print(stud["jeevan"])       #returns an error