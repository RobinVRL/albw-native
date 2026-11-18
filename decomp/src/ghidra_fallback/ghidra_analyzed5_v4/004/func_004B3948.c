#include "ghidra_types.h"

extern int func_0014AA1C(int param_1,char *param_2,int param_3);
extern int func_004CD878(undefined4 param_1,int param_2);
extern int func_004EF418(int param_1,byte *param_2,int param_3,int param_4);
extern int func_00582260(int param_1,uint param_2,uint param_3);
extern int func_00691884(int *param_1,int *param_2);
extern int *DAT_004b3ac4;
extern int *DAT_004b3ac8;
extern undefined4 DAT_004b3acc;
extern int DAT_004b3ad0;
extern int *DAT_004b3ad4;
extern undefined4 DAT_004b3ad8;
extern undefined4 DAT_004b3adc;
extern int DAT_004b3ae0;
extern undefined4 *DAT_004b3ae4;

// USA 004B3948 <- EU 004B3920 (Ghidra, non-matching)
// GLOBAL DAT_004b3ac4 int *
// GLOBAL DAT_004b3ac8 int *
// GLOBAL DAT_004b3acc undefined4
// GLOBAL DAT_004b3ad0 int
// GLOBAL DAT_004b3ad4 int *
// GLOBAL DAT_004b3ad8 undefined4
// GLOBAL DAT_004b3adc undefined4
// GLOBAL DAT_004b3ae0 int
// GLOBAL DAT_004b3ae4 undefined4 *

undefined4 func_004B3948(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(int *)(albw_frame + 0xc))
  #define local_20 (*(short *)(albw_frame + 0x10))
  #define local_1e (*(char *)(albw_frame + 0x12))
  piVar2 = DAT_004b3ac4;
  if ((*(char *)(param_1 + 0x2402) != '\0') && (param_2 == 0)) {
    iVar4 = func_00582260(*DAT_004b3ac8,(int)*(char *)(*DAT_004b3ac4 + 0x18),
                          *(uint *)(*DAT_004b3ac4 + 0x1c));
    local_24 = DAT_004b3acc;
    local_28 = DAT_004b3ad0;
    iVar5 = func_00691884((int *)(iVar4 + 4),&local_28);
    iVar4 = DAT_004b3ae0;
    puVar6 = (undefined1 *)(param_1 + 0x2402);
    if (iVar5 == 0) {
      if (*(int *)(param_1 + 0x23fc) == 8) {
        local_28 = CONCAT31((*(undefined4 *)((char *)&local_28 + 1) & 0xFFFFFF),2);
        local_24 = DAT_004b3adc;
        func_0014AA1C(*DAT_004b3ad4,(char *)&local_28,0);
        *puVar6 = 0;
        return 0;
      }
      if ((*(char *)(param_1 + 0x2403) != '\0') && (*(int *)(param_1 + 0x23fc) == 7)) {
        *(undefined4 *)(param_1 + 0x23e8) = 0;
        *(undefined4 *)(param_1 + 0x23fc) = 4;
        *(undefined4 *)(param_1 + 0x23ec) = 0x2a;
        *(undefined4 *)(param_1 + 0x23f0) = 0;
        *(undefined1 *)(iVar4 + param_1) = 0;
      }
      local_20 = (short)*(undefined4 *)(param_1 + 0x23f0);
      cVar1 = (char)*(undefined4 *)(param_1 + 0x23e8);
      local_1e = (char)(local_20 >> 7) + '\x01';
      local_24 = (int)(short)*(undefined4 *)(param_1 + 0x23ec);
      local_28 = CONCAT31((*(undefined4 *)((char *)&local_28 + 1) & 0xFFFFFF),cVar1);
      if (cVar1 != -1) {
        if (*(int *)(param_1 + 0x23fc) == 4) {
          iVar4 = 6;
        }
        else {
          iVar4 = 5;
        }
        iVar4 = func_004EF418(*piVar2,(byte *)&local_28,iVar4,0);
        puVar3 = DAT_004b3ae4;
        if (iVar4 != 0) {
          *puVar6 = 0;
          return func_004CD878(*puVar3,param_1 + 0x2c);
        }
      }
    }
    else {
      local_28 = CONCAT31((*(undefined4 *)((char *)&local_28 + 1) & 0xFFFFFF),2);
      local_24 = DAT_004b3ad8;
      func_0014AA1C(*DAT_004b3ad4,(char *)&local_28,0);
      *puVar6 = 0;
    }
  }
  return 0;
}

