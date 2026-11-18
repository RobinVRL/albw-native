#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_0017244C(int param_1,uint param_2);
extern int func_001D6738(undefined4 param_1);
extern int func_001D6FD0(undefined4 *param_1,uint param_2,int param_3,int *param_4,int param_5);
extern int func_0023A9A8(void);
extern int func_0023C4E8(int param_1,int param_2);
extern int func_0023C994(void);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2F38(int param_1,undefined4 *param_2);
extern int func_004CF478(int param_1,int param_2);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern int iRam0023c8dc;
extern int *piRam0023c8e0;
extern int *piRam0023c8e4;
extern int *piRam0023c8e8;
extern char s_Appear_0023c8c4[];
extern char s_Points_0023c8ec[];
extern char s_SE_PL_RUPEE_GET_0023c8cc[];

// USA 0023C710 <- EU 0023C710 (Ghidra, non-matching)
// GLOBAL UNK_0023c8dc int
// GLOBAL UNK_0023c8e0 int *
// GLOBAL UNK_0023c8e4 int *
// GLOBAL UNK_0023c8e8 int *
// GLOBAL s_Appear_0023c8c4 string
// GLOBAL s_Points_0023c8ec string
// GLOBAL s_SE_PL_RUPEE_GET_0023c8cc string

/* WARNING: Variable defined which should be unmapped: objStack_30 */

void func_0023C710(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define objStack_30 ((uint *)(albw_frame + 0x0))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x4))
  #define iStack_28 (*(int *)(albw_frame + 0x8))
  #define pcStack_24 (*(char * *)(albw_frame + 0xc))
  cVar1 = *(char *)(param_1 + 0x539);
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0x53a) = 0;
    *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0x10);
    func_004CF478(*(int *)(param_1 + 0x4f4),1);
    if (*(char *)(param_1 + 0x538) != '\0') {
      if (*(int *)(param_1 + 0x344) != 0) {
        func_004A1B9C((int *)objStack_30,*(int *)(param_1 + 0x344),(uint *)s_Appear_0023c8c4);
      }
      *(undefined1 *)(param_1 + 0x538) = 0;
    }
  }
  else if (param_2 == 1) {
    *(undefined1 *)(param_1 + 0x53a) = 1;
    *(undefined1 *)(param_1 + 0x538) = 1;
    func_004CF478(*(int *)(param_1 + 0x4f4),0);
    func_0023A9A8();
    pcStack_24 = s_SE_PL_RUPEE_GET_0023c8cc;
    iStack_28 = iRam0023c8dc;
    func_00587F74(*piRam0023c8e0,&iStack_28,0);
    uVar2 = (uint)(*(char *)(param_1 + 0x539) != '\0');
    objStack_30[0] = 0xffffffff;
    func_001D6FD0((undefined4 *)(param_1 + 0x3d0),uVar2,5,piRam0023c8e4,-1);
    uVar2 = func_001D6738(uVar2);
    func_0017244C(*piRam0023c8e8,uVar2);
    puVar3 = (uint *)(param_1 + 0x544);
    if (*(int *)(param_1 + 0x344) == 0) {
      *puVar3 = 0;
      *(undefined4 *)(param_1 + 0x548) = 0;
    }
    else {
      uVar2 = *puVar3;
      if ((uVar2 != 0) && (*(int *)(uVar2 + 0x1c) == *(int *)(param_1 + 0x548))) {
        func_00110848(uVar2);
      }
      func_004A1B9C((int *)objStack_30,*(int *)(param_1 + 0x344),(uint *)s_Points_0023c8ec);
      *puVar3 = objStack_30[0];
      *(undefined4 *)(param_1 + 0x548) = uStack_2c;
    }
    uVar2 = *puVar3;
    if ((uVar2 != 0) && (*(int *)(uVar2 + 0x1c) == *(int *)(param_1 + 0x548))) {
      func_004A2F38(uVar2,(undefined4 *)(param_1 + 0x3d0));
    }
    func_0023C4E8(param_1,0);
    if (cVar1 != '\0') {
      func_0023C994();
    }
  }
  *(char *)(param_1 + 0x4fc) = (char)param_2;
  return;
}

