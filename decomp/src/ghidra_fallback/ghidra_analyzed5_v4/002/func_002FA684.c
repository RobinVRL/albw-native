// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00323DF0(char *param_1,char param_2,int *param_3);
extern int func_003243A8(char *param_1,float *param_2,float *param_3);
extern int func_0036CE40(int *param_1,uint *param_2);
extern int func_0036CF20(undefined4 *param_1);
extern int func_0036CF2C(uint *param_1,undefined4 param_2,float fparam_0);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_0051D2CC(int *param_1,int param_2,float fparam_0);
extern int func_00520FC0(void);
extern int func_00556E64(int param_1);
extern int func_0058A7D4(void);
extern int func_00664230(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern float DAT_002fa884;
extern uint DAT_002fa888;
extern int *DAT_002fa88c;
extern int DAT_002fa890;
extern float DAT_002fa894;

// USA 002FA684 <- EU 002FA660 (Ghidra, non-matching)
// GLOBAL DAT_002fa884 float
// GLOBAL DAT_002fa888 uint
// GLOBAL DAT_002fa88c int *
// GLOBAL DAT_002fa890 int
// GLOBAL DAT_002fa894 float

undefined4 func_002FA684(int param_1)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  float *pfVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  ulonglong uVar8;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(char * *)(albw_frame + 0x8))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x10))
  #define local_3c (*(char * *)(albw_frame + 0x14))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x1c))
  local_48 = (char *)(param_1 + 0x8ec);
  fVar6 = *(float *)(param_1 + 0xa10) * DAT_002fa884;
  *(float *)(param_1 + 0xa10) = fVar6;
  *(float *)(param_1 + 0x9f8) = fVar6;
  iVar2 = func_003243A8(local_48,(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3dc));
  if (1 < *(int *)(param_1 + 0x8bc)) {
    if ((iVar2 != 0) || (*(char *)(param_1 + 0x9fc) != '\0')) {
      if (*(char *)(param_1 + 0xa1c) == '\0') {
        iVar2 = *(int *)(param_1 + 0xa18);
        func_0036CF20(*(undefined4 **)(param_1 + 0xa00));
        uVar8 = (ulonglong)DAT_002fa888;
        uVar5 = 0;
        do {
          if (((uVar5 != *(int *)(param_1 + 0xa18) + 0x20000000U >> 0x1e) ||
              (bVar1 = func_00323DF0(local_48,(char)uVar5,(int *)0x0), bVar1)) &&
             (uVar5 != iVar2 + 0xa0000000U >> 0x1e)) {
            func_0036CF2C(*(uint **)(param_1 + 0xa00),uVar5,ALBW_AS_F32(uVar8));
          }
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < 4);
        if (**(int **)(param_1 + 0xa00) < 1) {
          *(int *)(param_1 + 0xa18) = iVar2 + -0x80000000;
        }
        else {
          puVar3 = (uint *)func_0058A7D4();
          iVar2 = func_0036CE40(*(int **)(param_1 + 0xa00),puVar3);
          *(int *)(param_1 + 0xa18) = iVar2 << 0x1e;
        }
        *(undefined1 *)(param_1 + 0xa1c) = 1;
      }
      *(undefined1 *)(param_1 + 0x9fc) = 0;
    }
    func_004D80A4((float *)(param_1 + 0x3dc),*(uint *)(param_1 + 0xa18),*(float *)(param_1 + 0xa10))
    ;
    pfVar4 = (float *)func_00520FC0();
    fVar6 = *pfVar4 - *(float *)(param_1 + 0x3d0);
    fVar7 = pfVar4[2] - *(float *)(param_1 + 0x3d8);
    bVar1 = func_00556E64(*DAT_002fa88c);
    if ((!bVar1) && ((int)ALBW_AS_U32((fVar6 * fVar6 + fVar7 * fVar7)) <= DAT_002fa890)) {
      pfVar4 = (float *)func_00520FC0();
      func_00115C70((float *)&local_3c,pfVar4,(float *)(param_1 + 0x3d0));
      local_48 = local_3c;
      uStack_44 = uStack_38;
      uStack_40 = uStack_34;
      iVar2 = func_0068C690((float *)&local_48);
      func_0051D2CC((int *)(param_1 + 1000),iVar2,DAT_002fa894);
    }
    uVar5 = *(uint *)(param_1 + 0x8e0);
    if (uVar5 < *(uint *)(param_1 + 0x8e4)) {
      uVar5 = uVar5 + 1;
      *(uint *)(param_1 + 0x8e0) = uVar5;
    }
    if (*(uint *)(param_1 + 0x8e4) <= uVar5) {
      if (*(char *)(param_1 + 0xa14) == '\x02') {
        return func_00664230((undefined4 *)(param_1 + 0x8bc),2);
      }
      func_00664230((undefined4 *)(param_1 + 0x8bc),3);
    }
  }
  return 0;
}

