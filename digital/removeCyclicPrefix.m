function output = removeCyclicPrefix( input, prefix_length )
%REMOVECYCLICPREFIX Remove pefix of size prefix_length placed at the begining of each symbol

output = input(:,prefix_length+1:end);


end

