function out=meanSquaredError(reference,input)

temp=0;

for i=1:length(reference)
    temp=temp+(abs(reference(i)-input(i)))^2;
end

out=temp/length(reference);

end