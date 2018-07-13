close all

%% 書式
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

%% 保存フォルダ
mkdir 20180713;
cd 20180713;

%% 変数格納
data = CANSAT;
t = data(:,1)'/1000;
lat = data(:,4)';
lon = data(:,5)';
acc = data(:,6:8)';

%% 描画

% 加速度
figure(1)
plot(t,acc,'LineWidth',2)    
xlabel('Time [s]');
ylabel('Acceleration [m/s^2]', 'FontName','Times New Roman');
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