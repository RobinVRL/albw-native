/* compilefix: USA 004D1630 (EU 004D1608), the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/004/func_004D1630.c) with one fix:
 * the FixedSafeString<64> on the stack (vtable local_7c, buffer local_78, size local_74; ARM sp+0x14)
 * calls its virtual +8 (assureTerminated, 00691BD0) with r0 = the string (EU 4D1704 `add r0, sp, #20`);
 * Ghidra printed it without `this`: crash at an area change creating this actor (user report, frame
 * 6308). CLASS lost `this` on a stack object (BOOT_LOG 159). */
#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_001344C0(uint *param_1,int param_2,int *param_3);
extern int func_002C40D8(int param_1);
extern int func_00584B94(int param_1,int param_2);
extern undefined DAT_0000000d;
extern int DAT_004d183c;
extern int DAT_004d1840;
extern int DAT_004d1844;
extern int *DAT_004d1848;
extern int *DAT_004d184c;
extern undefined1 DAT_004d1850;
extern int *DAT_004d1858;

// USA 004D1630 <- EU 004D1608 (Ghidra, non-matching)
// GLOBAL DAT_0000000d undefined
// GLOBAL DAT_004d183c int
// GLOBAL DAT_004d1840 int
// GLOBAL DAT_004d1844 int
// GLOBAL DAT_004d1848 int *
// GLOBAL DAT_004d184c int *
// GLOBAL DAT_004d1850 undefined1
// GLOBAL DAT_004d1858 int *

void func_004D1630(int param_1)

{
  char cVar1;
  uint *puVar2;
  bool bVar3;
  char *pcVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_7c (*(int *)(albw_frame + 0x4))
  #define local_78 (*(uint * *)(albw_frame + 0x8))
  #define local_74 (*(int *)(albw_frame + 0xc))
  #define local_70 ((uint *)(albw_frame + 0x10))
  #define uStack_31 (*(undefined1 *)(albw_frame + 0x4f))
  #define local_30 (*(int *)(albw_frame + 0x50))
  #define local_2c (*(uint * *)(albw_frame + 0x54))
  if (*(char *)(param_1 + 0x564) == '\0') {
    func_002C40D8(param_1);
    iVar8 = DAT_004d183c;
    piVar6 = *(int **)(param_1 + 0x2c0);
    local_74 = 0x40;
    uStack_31 = 0;
    local_7c = DAT_004d1840;
    local_78 = local_70;
    (**(code **)(*piVar6 + 8))(piVar6);
    uVar5 = 0;
    do {
      if (*(char *)(piVar6[1] + uVar5) == '\0') {
        if ((int)uVar5 < 0x40001) goto LAB_004d1694;
        break;
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < 0x40001);
    uVar5 = 0;
LAB_004d1694:
    if (local_74 <= (int)uVar5) {
      uVar5 = local_74 - 1;
    }
    (**(code **)(*piVar6 + 8))(piVar6);
    func_0010E3C4(local_70,(uint *)piVar6[1],uVar5);
    local_7c = DAT_004d1844;
    *(undefined1 *)((int)local_70 + uVar5) = 0;
    bVar3 = func_00584B94(*DAT_004d1848,0xd2);
    puVar2 = local_78;
    piVar6 = DAT_004d184c;
    if ((!bVar3) &&
       ((char)*(undefined4 *)(*DAT_004d184c + 0x18) == '\0' && *(int *)(*DAT_004d184c + 0x1c) == 0xf
       )) {
      local_2c = (uint *)&DAT_004d1850;
      local_30 = iVar8;
      (**(code **)(local_7c + 8))(&local_7c);   /* this restored */
      iVar8 = 0;
      do {
        if (*(char *)((int)local_78 + iVar8) == '\0') {
          if (iVar8 < 0x40001) goto LAB_004d1758;
          break;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < 0x40001);
      iVar8 = 0;
LAB_004d1758:
      iVar7 = iVar8;
      if (iVar8 < 0) {
        iVar7 = 0;
      }
      (**(code **)(local_30 + 8))(&local_30);
      uVar5 = 0;
      do {
        if (*(char *)((int)local_2c + uVar5) == '\0') {
          if ((int)uVar5 < 0x40001) goto LAB_004d17a8;
          break;
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < 0x40001);
      uVar5 = 0;
LAB_004d17a8:
      if (local_74 - iVar7 <= (int)uVar5) {
        uVar5 = (local_74 - iVar7) - 1;
      }
      if (0 < (int)uVar5) {
        (**(code **)(local_30 + 8))(&local_30);
        func_0010E3C4((uint *)((int)puVar2 + iVar7),local_2c,uVar5);
        if (iVar8 < (int)(iVar7 + uVar5)) {
          *(undefined1 *)((int)puVar2 + iVar7 + uVar5) = 0;
        }
      }
    }
    if (*(char *)(*DAT_004d1858 + 0x25) == '\x03') {
      pcVar4 = (char *)(*piVar6 + 0x18);
      cVar1 = *pcVar4;
      if (cVar1 == '\0') {
        pcVar4 = *(char **)(*piVar6 + 0x1c);
      }
      if (cVar1 == '\0' && pcVar4 == &DAT_0000000d) {
        return;
      }
    }
    func_001344C0((uint *)(param_1 + 0x40c),param_1,&local_7c);
  }
  return;
}

