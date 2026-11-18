#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0014A998(int param_1,int param_2);
extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C43E0(int param_1,int *param_2);
extern int func_006890C8(undefined4 *param_1,int *param_2,int *param_3);
extern int *DAT_0027ba44;
extern int DAT_0027ba54;
extern uint *DAT_0027ba6c;
extern int *DAT_0027ba70;
extern int *DAT_0027ba74;
extern char s_vr_Black_0027ba60[];
extern char s_vr_Omote_0027ba48[];
extern char s_vr_Ura_0027ba58[];

// USA 0027B7B4 <- EU 0027B7DC (Ghidra, non-matching)
// GLOBAL DAT_0027ba44 int *
// GLOBAL DAT_0027ba54 int
// GLOBAL DAT_0027ba6c uint *
// GLOBAL DAT_0027ba70 int *
// GLOBAL DAT_0027ba74 int *
// GLOBAL s_vr_Black_0027ba60 string
// GLOBAL s_vr_Omote_0027ba48 string
// GLOBAL s_vr_Ura_0027ba58 string

undefined4 func_0027B7B4(char *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x2e0];
  #define local_2e0 ((int *)(albw_frame + 0x0))
  #define local_2c4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_2c0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2bc (*(undefined4 *)(albw_frame + 0x24))
  #define local_298 (*(undefined4 *)(albw_frame + 0x48))
  #define local_294 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_28c (*(short *)(albw_frame + 0x54))
  #define local_24 (*(undefined4 * *)(albw_frame + 0x2bc))
  #define local_20 (*(uint *)(albw_frame + 0x2c0))
  #define local_18 (*(int *)(albw_frame + 0x2c8))
  #define local_14 (*(char * *)(albw_frame + 0x2cc))
  if (*(char *)(*DAT_0027ba44 + 0x7abe) == '\0') {
    iVar3 = (int)*param_1;
    local_2c0 = 0;
    local_2bc = 0;
    local_2c4 = 0;
    local_298 = 0;
    local_294 = 0;
    local_20 = 0;
    func_002DFF7C(local_2e0);
    switch(iVar3) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
      if (iVar3 != 8) {
        if (iVar3 == 0) {
          if (*(int *)(param_1 + 4) == 0x2a) {
LAB_0027ba2c:
            return func_0014A998(*DAT_0027ba74,0);
          }
          puVar2 = (undefined4 *)func_0010BAB4(0xc);
          local_24 = (undefined4 *)0x0;
          if (puVar2 != (undefined4 *)0x0) {
            local_14 = s_vr_Omote_0027ba48;
            local_18 = DAT_0027ba54;
            local_24 = func_006890C8(puVar2,(int *)0x0,&local_18);
          }
        }
        else if (iVar3 == 1) {
          puVar2 = (undefined4 *)func_0010BAB4(0xc);
          local_24 = (undefined4 *)0x0;
          if (puVar2 != (undefined4 *)0x0) {
            local_14 = s_vr_Ura_0027ba58;
            local_18 = DAT_0027ba54;
            local_24 = func_006890C8(puVar2,(int *)0x0,&local_18);
          }
        }
        else {
          if (iVar3 == 5) {
            if (*(int *)(param_1 + 4) == 9) goto LAB_0027ba2c;
            puVar2 = (undefined4 *)func_0010BAB4(0xc);
          }
          else if (iVar3 == 7) {
            if (*(int *)(param_1 + 4) == 0 || *(int *)(param_1 + 4) == 3) {
              return 0;
            }
            puVar2 = (undefined4 *)func_0010BAB4(0xc);
          }
          else {
            puVar2 = (undefined4 *)func_0010BAB4(0xc);
          }
          local_24 = (undefined4 *)0x0;
          if (puVar2 != (undefined4 *)0x0) {
            local_14 = s_vr_Black_0027ba60;
            local_18 = DAT_0027ba54;
            local_24 = func_006890C8(puVar2,(int *)0x0,&local_18);
          }
        }
        puVar1 = DAT_0027ba6c;
        local_2e0[0] = func_0019B04C(*DAT_0027ba6c);
        local_20 = local_20 | 1;
        local_28c = -(short)*puVar1;
        func_004C43E0(*DAT_0027ba70,local_2e0);
        *(undefined1 *)(*DAT_0027ba44 + 0x7abe) = 1;
      }
    }
  }
  return 0;
}

