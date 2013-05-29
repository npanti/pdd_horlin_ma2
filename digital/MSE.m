function out = MSE(estimatedValues,trueValues)
%MSE Summary of this function goes here
%   Detailed explanation goes here

n = length(trueValues);

out = 1/n*sum((estimatedValues-trueValues).^2);

end

