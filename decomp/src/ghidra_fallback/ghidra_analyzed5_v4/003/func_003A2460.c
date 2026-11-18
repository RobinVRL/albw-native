#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_0018AFD4(int param_1);
extern int func_0018B874(undefined4 *param_1,float *param_2,uint param_3,undefined2 param_4, undefined4 param_5);
extern int func_002C2D00(int *param_1);
extern int func_003AB9D8(undefined4 param_1,int param_2,int param_3);
extern int func_004CEAF0(int param_1);
extern int func_005532B4(undefined4 param_1,int param_2,int param_3,uint param_4);
extern int func_00668A78(undefined4 *param_1,undefined1 param_2);
extern undefined4 *DAT_003a25c8;
extern int *DAT_003a25cc;
extern uint DAT_003a25d0;
extern uint DAT_003a25d4;
extern undefined4 DAT_003a25d8;

// USA 003A2460 <- EU 003A243C (Ghidra, non-matching)
// GLOBAL DAT_003a25c8 undefined4 *
// GLOBAL DAT_003a25cc int *
// GLOBAL DAT_003a25d0 uint
// GLOBAL DAT_003a25d4 uint
// GLOBAL DAT_003a25d8 undefined4

/* WARNING: Variable defined which should be unmapped: objStack_58 */

undefined4 func_003A2460(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define objStack_58 ((uint *)(albw_frame + 0x8))
  puVar2 = DAT_003a25c8;
  if (*(int *)(param_1 + 8) == 0) {
    iVar5 = 1;
  }
  else {
    iVar5 = func_0010983C(*DAT_003a25c8,*(int *)(param_1 + 8));
  }
  objStack_58[4] =
       func_005532B4(*(undefined4 *)(*DAT_003a25cc + 0x10),5,(uint)*(byte *)(param_1 + 0xc),0);
  objStack_58[0] = DAT_003a25d4;
  objStack_58[1] = DAT_003a25d0;
  objStack_58[2] = DAT_003a25d4;
  objStack_58[3] = DAT_003a25d0;
  objStack_58[5] = 0;
  (*(undefined1 *)((char *)&objStack_58[0xe] + 0)) = 1;
  (*(undefined1 *)((char *)&objStack_58[7] + 1)) = 0;
  objStack_58[9] = 0;
  objStack_58[0xc] = 0;
  objStack_58[0xd] = 0;
  objStack_58[0xb] = 0;
  (*(undefined1 *)((char *)&objStack_58[0xe] + 1)) = 0xc4;
  objStack_58[8] = 0;
  objStack_58[10] = 0;
  (*(undefined1 *)((char *)&objStack_58[7] + 0)) = 1;
  objStack_58[6] = 1;
  piVar3 = func_002C2D00((int *)objStack_58);
  *(int **)(param_1 + 0x34) = piVar3;
  func_003AB9D8(param_1,(int)piVar3,1);
  *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x134) = DAT_003a25d8;
  iVar4 = *(int *)(param_1 + 0x34);
  *(uint *)(iVar4 + 0x164) = *(uint *)(iVar4 + 0x164) | 0x40000000;
  func_001151EC((undefined4 *)(iVar4 + 0x80),
                (undefined4 *)
                (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x8d4) + 0x24) + 0x14) +
                *(int *)(*(int *)(param_1 + 4) + 0x8f4) * 0x30));
  func_004CEAF0(*(int *)(param_1 + 0x34));
  bVar6 = *(char *)(param_1 + 0x39) != '\0';
  cVar1 = '\0';
  if (bVar6) {
    cVar1 = *(char *)(param_1 + 0x38);
  }
  if (bVar6 && cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x39) = 0;
    iVar4 = *(int *)(param_1 + 4);
    objStack_58[0] = *(uint *)(iVar4 + 0x2cc);
    iVar4 = func_0018B874((undefined4 *)(iVar4 + 0x3d0),(float *)(iVar4 + 0x3dc),
                          *(uint *)(iVar4 + 1000),(ushort)('\x01' < *(char *)(param_1 + 0xc)),
                          objStack_58[0]);
    if (iVar4 != 0) {
      func_0018AFD4(iVar4);
    }
  }
  func_00668A78((undefined4 *)(param_1 + 0x10),0);
  if (iVar5 == 1) {
    return 0;
  }
  return func_0010983C(*puVar2,iVar5);
}

