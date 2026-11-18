#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_002917A4(int param_1,float *param_2,undefined4 param_3,float fparam_0);
extern int func_00291A38(int param_1,float *param_2,float fparam_0);
extern int func_004F9FC4(int param_1,int param_2);
extern int DAT_0032c684;
extern int DAT_0032c6a0;
extern int *DAT_0032c6a4;
extern float DAT_0032c6a8;
extern char s_SE_BlackShueyes_BOYOYON_0032c688[];

// USA 0032C544 <- EU 0032C520 (Ghidra, non-matching)
// GLOBAL DAT_0032c684 int
// GLOBAL DAT_0032c6a0 int
// GLOBAL DAT_0032c6a4 int *
// GLOBAL DAT_0032c6a8 float
// GLOBAL s_SE_BlackShueyes_BOYOYON_0032c688 string

uint func_0032C544(int *param_1,uint param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  cVar1 = (char)param_1[0x2eb];
  if ((((cVar1 != '\x10' && cVar1 != '\x11') && (cVar1 != '\x12' && cVar1 != '\x14')) &&
      (0 < *(short *)(DAT_0032c684 + (int)param_1))) && (param_2 != 3)) {
    if ((param_2 != 0x12) && (4 < (param_2 & 0xff) - 5)) {
      uVar2 = param_2 & 0xff;
      bVar3 = 0x1d < uVar2;
      bVar4 = uVar2 != 0x1e;
      if (bVar4) {
        uVar2 = uVar2 - 0xe;
        bVar3 = 2 < uVar2;
      }
      if (bVar3 && (bVar4 && uVar2 != 3)) {
        param_1[0x168] = param_1[0x168] | 0x80;
        return param_2;
      }
      if (*(char *)(param_3 + 0x27) == '\0') {
        return 0xf;
      }
      *(undefined1 *)(param_1 + 0x326) = 1;
      param_1[800] = 0x18;
      cVar1 = *(char *)(param_3 + 0x24);
      if (cVar1 == '\0') {
        return 7;
      }
      if (cVar1 == '\x05') {
        func_002917A4(*DAT_0032c6a4,param_1 + 0xf4,0,DAT_0032c6a8);
        return 0xf;
      }
      if (cVar1 != '\b') {
        return 0xf;
      }
      func_00291A38(*DAT_0032c6a4,param_1 + 0xf4,DAT_0032c6a8);
      return 0xf;
    }
    cVar1 = *(char *)(param_3 + 0x24);
    bVar3 = cVar1 == '\t' || cVar1 == '\n';
    if (cVar1 == '\t' || cVar1 == '\n') {
      bVar3 = *(char *)(param_3 + 0x27) == '\0';
    }
    if (!bVar3) {
      return 0xf;
    }
    if (param_1[800] == 0) {
      local_c = s_SE_BlackShueyes_BOYOYON_0032c688;
      local_10 = DAT_0032c6a0;
      func_00150A84(param_1,&local_10,0);
      *(undefined1 *)(param_1 + 0x326) = 0;
      param_1[800] = 0xf;
      func_004F9FC4((int)param_1,param_1[0x10f]);
    }
  }
  return 0;
}

