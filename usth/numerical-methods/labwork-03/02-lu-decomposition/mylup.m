function [ L, U, P ] = mylup( A )
%% LU DECOMPOSITION WITH PIVOTING
[n,m] = size(A);
C = zeros(n, n+1);
% initialize
C(1:n, 1:n) = A;
C(1:n, n+1) = (1:n)';
% main algorithm
for j=1:n-1
 if (sum(C(1:n,j)) == 0)
 error('mylup:input', 'The solution is not determined.');
 end
 [~, i] = max(abs(C(1:n, j)));

 if (i ~= j)
 tt = C(i, 1:n+1);
 C(i, 1:n+1) = C(j, 1:n+1);
 C(j, 1:n+1) = tt;
 end

 for i = j+1:n
 t = C(i, j) / C(j, j);
 C(i, j) = t;
 C(i, j+1:n) = C(i, j+1:n) - t*C(j, j+1:n);
 end
end
% refine the results
PP = C(1:n, n+1);
C = C(1:n, 1:n);
L = tril(C, -1);
U = triu(C);
P = zeros(n, n);
for i=1:n
 L(i,i)=1;
 P(i, PP(i)) = 1;
end
end