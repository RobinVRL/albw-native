#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C43E0(int param_1,int *param_2);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int iRam0023aa44;
extern undefined4 uRam0023aa50;
extern int *piRam0023aa3c;
extern undefined4 *puRam0023aa40;
extern undefined4 *puRam0023aa48;
extern undefined4 *puRam0023aa4c;
extern uint *DAT_0023b2e4;
extern float *DAT_0023b2e8;
extern int *DAT_0023b2ec;

// USA 0023A9A8 <- EU 0023A9A8 (Ghidra, non-matching)
// GLOBAL DAT_0023b2e4 uint *
// GLOBAL DAT_0023b2e8 float *
// GLOBAL DAT_0023b2ec int *
// GLOBAL UNK_0023aa3c int *
// GLOBAL UNK_0023aa40 undefined4 *
// GLOBAL UNK_0023aa44 int
// GLOBAL UNK_0023aa48 uint *
// GLOBAL UNK_0023aa4c undefined4 *
// GLOBAL UNK_0023aa50 undefined4

int func_0023A9A8(void)

{
  undefined4 *puVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x2e0];
  #define iStack_2d8 (*(int *)(albw_frame + 0x8))
  #define fStack_2d4 (*(float *)(albw_frame + 0xc))
  #define uStack_2d0 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_2cc (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_2bc (*(undefined4 *)(albw_frame + 0x24))
  #define iStack_2b8 (*(int *)(albw_frame + 0x28))
  #define uStack_2b4 (*(undefined4 *)(albw_frame + 0x2c))
  #define uStack_290 (*(undefined4 *)(albw_frame + 0x50))
  #define uStack_28c (*(undefined4 *)(albw_frame + 0x54))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x2c8))
  #define fStack_14 (*(float *)(albw_frame + 0x2cc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x2d0))
  #define uStack_c (*(undefined4 *)(albw_frame + 0x2d4))
  puVar1 = (undefined4 *)
           func_005841A8(*piRam0023aa3c,*puRam0023aa40,*(int **)(iRam0023aa44 + *piRam0023aa3c));
  puVar1 = (undefined4 *)*puVar1;
  if (((*puRam0023aa48 & 1) == 0) && (iVar2 = func_00100174((int *)puRam0023aa48), iVar2 != 0)) {
    *puRam0023aa4c = uRam0023aa50;
  }
  if ((puVar1 == (undefined4 *)0x0) ||
     (iVar2 = (**(code **)*puVar1)(puVar1,puRam0023aa4c), iVar2 == 0)) {
    puVar1 = (undefined4 *)0x0;
  }
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = puVar1[0x11e] + 1;
    puVar1[0x11e] = iVar2;
    if (2 < iVar2) {
      iVar2 = 0;
      puVar1[0x11e] = 0;
      if (0 < 0x1e - puVar1[0x11d]) {
        iStack_2b8 = 0;
        uStack_2b4 = 0;
        uStack_2bc = 0;
        uStack_290 = 0;
        uStack_28c = 0;
        uStack_18 = 0;
        func_002DFF7C(&iStack_2d8);
        iStack_2d8 = func_0019B04C(*DAT_0023b2e4);
        func_00115C54(&fStack_14,(float *)(puVar1 + 0xf4),DAT_0023b2e8);
        fStack_2d4 = fStack_14;
        uStack_2d0 = uStack_10;
        uStack_2cc = uStack_c;
        iStack_2b8 = puVar1[0xfa] + -0x40000000;
        uStack_28c = puVar1[0xb3];
        iVar2 = func_004C43E0(*DAT_0023b2ec,&iStack_2d8);
      }
    }
    return iVar2;
  }
  return 0;
}

