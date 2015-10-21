close all;
clear all;
x = load('Pi_Approx.txt');
N = length(x);
x = x';
figure(1);
plot(1:N,x(3,:));
title('pi estimate against number of rain drops');
xlabel('Number of rain drops');
figure(2);
hold on
for i=1:N
    figure(2);
    if (x(4,i)==1)
        plot(x(1,i),x(2,i),'.r');
    else
        plot(x(1,i),x(2,i),'.');
    end
    title([int2str(i),' drops ',int2str(x(5,i)),' landed in circle,estimating pi as ',num2str(x(3,i))]);
    %F(i)=getframe(gcf);
end

%movie2avi(F,'Pi_Estimation.avi','compression','None','fps',50);