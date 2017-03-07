#ifdef HAVE_CONFIG_H
#include "config.h"
#endif
#include <speex/speex.h>
#include "arch.h"

#define FRAME_SIZE 160 //*0.125�� = 20�� (������������� 8���)
#define ENCODED_FRAME_SIZE 20 //������� � 8 ���
#define MAX_REC_FRAMES 90 //������������ ����� ������������ �������, ����� = MAX_REC_FRAMES*0,02���

extern __IO uint16_t IN_Buffer[2][FRAME_SIZE];
extern __IO uint8_t Start_Encoding;

extern uint16_t VAD_COUNT;
extern uint16_t VAD_SENS;
extern uint16_t VAD_LENGTH;
extern uint8_t VAD_detect;

void Speex_Init(void);
void EncodingVoice(void);