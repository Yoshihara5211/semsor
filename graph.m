close all

%% ����
% GUI�̃t�H���g
set(0, 'defaultUicontrolFontName', 'MS UI Gothic');
% ���̃t�H���g
set(0, 'defaultAxesFontName','Times New Roman');
% �^�C�g���A���߂Ȃǂ̃t�H���g
set(0, 'defaultTextFontName','Times New Roman');
% GUI�̃t�H���g�T�C�Y
set(0, 'defaultUicontrolFontSize', 14);
% ���̃t�H���g�T�C�Y
set(0, 'defaultAxesFontSize', 14);
% �^�C�g���A���߂Ȃǂ̃t�H���g�T�C�Y
set(0, 'defaultTextFontSize', 14);

%% �ۑ��t�H���_
mkdir 20180713;
cd 20180713;

%% �ϐ��i�[
data = CANSAT;
t = data(:,1)'/1000;
lat = data(:,4)';
lon = data(:,5)';
acc = data(:,6:8)';

%% �`��

% �����x
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