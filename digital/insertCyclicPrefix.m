function output = insertCyclicPrefix(input,prefix_length)
%INSERTCYCLICPREFIX Add pefix of size prefix_length at the begining of each symbol

prefix = input(:,(end-prefix_length+1):end);

output = [prefix input];

clear prefix;

end

