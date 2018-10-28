#ifndef __BASE_ERROR_H__
#define __BASE_ERROR_H__

#define COMERR_OK (0)
#define COMERR_BASE (0x0000)

#define COMERR_UNKOWN               (-1) //δ֪����
#define COMERR_NOT_INIT             (COMERR_BASE + 1) // û��ʼ��
#define COMERR_ALREADY_INIT         (COMERR_BASE + 2) // �Ѿ���ʼ��
#define COMERR_INVALID_PARAM        (COMERR_BASE + 3) // ������Ч
#define COMERR_NULL_POINTER         (COMERR_BASE + 4) // ָ��Ϊ��
#define COMERR_TIMEOUT              (COMERR_BASE + 5) // ��ʱ
#define COMERR_INST_LIMIT           (COMERR_BASE + 6) // �޿���ʵ������������
#define COMERR_INST_INVALID         (COMERR_BASE + 7) // ��Чʵ��
#define COMERR_VERSION              (COMERR_BASE + 8) // �汾��ƥ��
#define COMERR_NOT_SUPPORT          (COMERR_BASE + 9) // ��֧�ֵĹ��ܣ���δʵ�ֻ�ָ�������²�֧��
#define COMERR_ABILITY_LIMIT        (COMERR_BASE + 10) // ��������
#define COMERR_NOT_FOUND            (COMERR_BASE + 11) // ָ�����ݻ�ָ�������
#define COMERR_SEM_FAILED           (COMERR_BASE + 12) // �ź�������
#define COMERR_LOCK_FAILED          (COMERR_BASE + 13) // ������
#define COMERR_PORT_USED            (COMERR_BASE + 14) // �˿ڱ�ռ��
#define COMERR_DB                   (COMERR_BASE + 15) // ͨ�����ݿ���󣨰������ݿ�����ʧ�ܣ�
#define COMERR_PARSE             	(COMERR_BASE + 16) // ����ʧ��
#define COMERR_PASSWORD             (COMERR_BASE + 17) // �������
#define COMERR_ISLOGIN              (COMERR_BASE + 18) // ��ε�¼
#define COMERR_THIRDPARTIES         (COMERR_BASE + 19) // ��������ʧ��
#define COMERR_CYCLE                (COMERR_BASE + 20) // ѭ��������
#define COMERR_SYSCALL              (COMERR_BASE + 21) // ϵͳ���ô�
#define COMERR_MEMERR               (COMERR_BASE + 22) // �ڴ��
#define COMERR_MEMLOW               (COMERR_BASE + 23) // �ڴ治��
#define COMERR_TASKERR              (COMERR_BASE + 24) // �������
#define COMERR_STACKERR             (COMERR_BASE + 25) // ��ջ����
#define COMERR_AUTH                 (COMERR_BASE + 26) // Ȩ�޴���
#define COMERR_PRIORITY             (COMERR_BASE + 27) // �ȼ���(���ȼ���)     
#define COMERR_USER_FREEZE          (COMERR_BASE + 28) // �˻�������
#define COMERR_LICENCES             (COMERR_BASE + 29) // �Ƿ�֤��
#define COMERR_FILE					(COMERR_BASE + 30) // �ļ�����
#define COMERR_NOT_LOGIN			(COMERR_BASE + 31) // δ��½

#define COMERR_OPEN_FAILED			(COMERR_BASE + 32)	// ��ʧ��
#define COMERR_INIT_FAILED			(COMERR_BASE + 33)	// ��ʼ��ʧ��
#define COMERR_UNINIT_FAILED		(COMERR_BASE + 34)	// ����ʼ��ʧ��
#define COMERR_ALREADY_EXIST		(COMERR_BASE + 35)	// �Ѿ�����
#define COMERR_DATAERR				(COMERR_BASE + 36)	// ���ݴ���
//Socket
#define COMERR_SOCKET_WAIT_CONNECT		(COMERR_BASE + 37)		//�ȴ�����
#define COMERR_SOCKET_CONNECT_FAILED	(COMERR_BASE + 38)		//����ʧ��
#define COMERR_SOCKET_SEND_FAILED		(COMERR_BASE + 39)		//����ʧ��
#define COMERR_SOCKET_RECV_FAILED		(COMERR_BASE + 40)		//����ʧ��
#define COMERR_SOCKET_DISCONNECT		(COMERR_BASE + 41)		//�Ͽ�����
#define COMERR_PROTOCOL_UMMATCH           (COMERR_BASE + 42)		//Э�鲻ƥ��
#define COMERR_ALREADY_RUNNING			(COMERR_BASE + 43)	// �Ѿ�����

#define COMERR_SUBSCRIP_FAILED			(COMERR_BASE + 44)	// ����ʧ��
#define COMERR_UNSUBSCRIP_FAILED			(COMERR_BASE + 45)	// ȡ������ʧ��
#define COMERR_PUBLISH_FAILED			(COMERR_BASE + 46)	// ����ʧ��


#endif //__BASE_ERROR_H__
