// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00323DF0(char *param_1,char param_2,int *param_3);
extern undefined8 func_00323E88(char *param_1,uint param_2,uint *param_3);
extern int func_00520FC0(void);
extern int func_00556E64(int param_1);
extern int func_0058A7D4(void);
extern int func_0058E2B8(int *param_1);
extern int func_0068C690(float *param_1);
extern int *DAT_00263788;
extern int DAT_0026378c;
extern uint DAT_00263790;

// USA 00263620 <- EU 00263648 (Ghidra, non-matching)
// GLOBAL DAT_00263788 int *
// GLOBAL DAT_0026378c int
// GLOBAL DAT_00263790 uint

uint func_00263620(int param_1,undefined1 *param_2)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  float *pfVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(float *)(albw_frame + 0x0))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x14))
  #define local_28 ((int *)(albw_frame + 0x18))
  puVar2 = (uint *)func_0058A7D4();
  uVar9 = func_00323E88((char *)(param_1 + 0x8f0),(int)*(char *)(param_1 + 0x8e0),puVar2);
  uVar3 = (uint)uVar9;
  *param_2 = 0;
  pfVar4 = (float *)func_00520FC0();
  fVar8 = *pfVar4 - *(float *)(param_1 + 0x3d0);
  fVar7 = pfVar4[2] - *(float *)(param_1 + 0x3d8);
  fVar7 = fVar8 * fVar8 + fVar7 * fVar7;
  bVar1 = func_00556E64(*DAT_00263788);
  if ((!bVar1) && ((int)ALBW_AS_U32(fVar7) <= DAT_0026378c)) {
    pfVar4 = (float *)func_00520FC0();
    func_00115C70(&local_34,pfVar4,(float *)(param_1 + 0x3d0));
    local_40 = local_34;
    uStack_3c = uStack_30;
    uStack_38 = uStack_2c;
    local_28[0] = func_0068C690(&local_40);
    local_28[0] = local_28[0] - (local_28[0] + 0x20000000U & 0xc0000000);
    uVar5 = func_0058E2B8(local_28);
    if (uVar5 < DAT_00263790) {
      pfVar4 = (float *)func_00520FC0();
      func_00115C70(&local_34,pfVar4,(float *)(param_1 + 0x3d0));
      local_40 = local_34;
      uStack_3c = uStack_30;
      uStack_38 = uStack_2c;
      iVar6 = func_0068C690(&local_40);
      bVar1 = func_00323DF0((char *)(param_1 + 0x8f0),(byte)(iVar6 + 0x20000000U >> 0x1e),(int *)0x0
                           );
      if (!bVar1) {
        *param_2 = 1;
        uVar3 = iVar6 + 0x20000000U >> 0x1e;
      }
    }
  }
  return uVar3;
}

