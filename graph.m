close all

% 書式
% GUIのフォント
set(0, 'defaultUicontrolFontName', 'MS UI Gothic');
% 軸のフォント
set(0, 'defaultAxesFontName','Times New Roman');
% タイトル、注釈などのフォント
set(0, 'defaultTextFontName','Times New Roman');
% GUIのフォントサイズ
set(0, 'defaultUicontrolFontSize', 14);
% 軸のフォントサイズ
set(0, 'defaultAxesFontSize', 14);
% タイトル、注釈などのフォントサイズ
set(0, 'defaultTextFontSize', 14);

% 保存フォルダ
mkdir 20180715;
cd 20180715;

%% 変数格納
t = data(:,1)'/1000;
lat = data(:,4)';
lon = data(:,5)';
acc = data(:,6:8)';
direct = data(:,18)';
distance = data(:,19)';
% time = data(:,22)';
% 描画

% 加速度
figure(1)
plot(t,acc/9.8,'LineWidth',2)    
xlabel('Time [s]');
ylabel('Acceleration [G]', 'FontName','Times New Roman');
legend('x','y','z')
grid on
saveas(gcf,'Acceleration.jpg');

% GPS
figure(2)
plot(lon,lat,'LineWidth',2)    
xlabel('Longtitude [m]');
ylabel('Latitude [m]', 'FontName','Times New Roman');
grid on
saveas(gcf,'Gps.jpg');

% 自己位置推定
k = find(direct);
direct = direct(k);
distance = distance(k);
% time = time(k); 
s = 0:0.01:2*pi;
figure(3)
x = distance .* sin(45*(direct-1)*pi/180);
y = distance .* -cos(45*(direct-1)*pi/180);
% if (time>=0 && time<27) {
% plot(x,y,'b:o','LineWidth',2,'MarkerEdgeColor',[0,0,0.1]);
% hold on
% }
% if (time>=27 && time<27*2) {
% plot(x,y,'b:o','LineWidth',2,'MarkerEdgeColor',[0,0,0.2]);
% hold on
% }
% if (time>=27*2 && time<27*3) {
% plot(x,y,'b:o','LineWidth',2,'MarkerEdgeColor',[0,0,0.3]);
% hold on
% }
% if (time>=27*3 && time<27*4) {
% plot(x,y,'b:o','LineWidth',2,'MarkerEdgeColor',[0,0,0.1]);
% hold on
% } 
% if (time>=27*4 && time<27*5) {
% plot(x,y,'b:o','LineWidth',2,'MarkerEdgeColor',[0,0,0.1]);
% hold on
% } 
% if (time>=27*5 && time<27*6) {
% plot(x,y,'b:o','LineWidth',2,'MarkerEdgeColor',[0,0,0.1]);
% hold on
% } 
plot(x,y,'b:o','LineWidth',2,'MarkerEdgeColor',[0,0,0.1]);
hold on
plot(500*cos(s),500*sin(s),'k');
hold on
plot(0,0,'rp','MarkerSize',10);
title('Self Position Estimation')
xlabel('West<------>East[cm]');
ylabel('South<------>North[cm]');
axis([-500 500 -500 500]);
grid on
saveas(gcf, 'Self Position Estimation.jpg')