function output = imux(input,N)
%IMUX Inverse multiplexer. Serial-to-Parallel with N output

if mod(length(input),N)
    error('Not divisible by %i',N);
end

output = reshape(input,N,[]);
%output = reshape(input,[],N)';


end

