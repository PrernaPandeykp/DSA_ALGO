# import pandas as pd
# import string
# import numpy as np
# with open('myfile.txt', 'w') as fp:
#     for i in range(13,1300,13):
#         # s=" "*4, str(i).zfill(9),x.rjust(22)
#         start_space= " "*4
#         index=str(i).zfill(9)

#         data= "abc"+str(i)
#         write(start_space+index +" "*22+data)

    
# data2 = pd.DataFrame({"A": np.arange(13,1201,13),
#                      "B" : list(string.ascii_lowercase)[0:98],
#                      })

# print(data2)

for i in range(13,1300,13):
    # s=" "*4, str(i).zfill(9),x.rjust(22)
    start_space= " "*4
    index=str(i).zfill(9)

    data= "abc"+str(i)
    print(start_space+index +" "*22+data+" "*(101-len(data)) +"1")


with open('myfile.txt', 'w') as fp:
    for i in range(13,1300,13):
    # s=" "*4, str(i).zfill(9),x.rjust(22)
        start_space= " "*4
        index=str(i).zfill(9)

        data= "abc"+str(i)
        fp.write(start_space+index +" "*22+data+" "*(101-len(data)) +"1")

