� �j lude <stdio.h>
 
 int main() {
 	
 	// һ��24Сʱ��1440���� 
 	const int daytime = 1440;
 	// BJT��UTCֱ�ӵ�ʱ�� min
	const int difftime = 480; 
 	
 	// ����BJT(0~2359) 
	int bjt = 0;
	scanf("%d", &bjt);
	
	// �ֱ��ȡBJT��ÿһλ
	int g = 0, s = 0, b = 0, q = 0;
	g = bjt % 10;	// ��λ 
	bjt = bjt / 10;
	s = bjt % 10;	// ʮλ 
	bjt = bjt / 10;
	b = bjt % 10;	// ��λ 
	bjt = bjt / 10; 
 	q = bjt % 10;	// ǧλ 
	bjt = bjt / 10;
 	
 	// ����ɷ���
	bjt = (q * 10 + b) * 60 + s * 10 + g;
	
	// BJTת��UTC 
 	int utc = bjt - difftime;
	
	// �ж��Ƿ����
	if(utc < 0) {
		utc = utc + daytime;
	} 
	
	// ��utcת���ɱ�׼��ʾ 
	int h = 0, m = 0;
	h = utc / 60; 
 	m = utc % 60;
 	if(h > 0) {
 		if(m >= 10) {
 			printf("%d%d", h, m);
		} else {
			int tmp = 0;
			printf("%d%d%d", h, tmp, m);
		}
	 } else{
	 	printf("%d", m);
	 }
 	return 0;
 }
