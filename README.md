# Parameters-Challenge

## Abstraction
The object of this analysis is to test and stress out the numer of arguments passed into a regular C++ function until the program raises an error or starts acting unstable. Theorically the C++ standard suggests that it should support at least 256 parameters/arguments and the first few arguments are often placed in CPU registers as provide easier access and much performant than memory and so the remaining arguments are copied onto the stack. Depending on the machine architure and performance i think it would be safe to say that this test results can vary widely from different machines.

## Results Obtained
- **Summary of Findings**: While working with a script capable to allocate memory for arguments up to a certain extent, 
- **Visual Aids**: If applicable, include graphs or charts to illustrate the findings.
  ![Graph Title](url_to_graph_image)
