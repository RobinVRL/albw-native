#include "ghidra_types.h"

extern int func_003D25C8(undefined4 *param_1,short *param_2);
extern int func_003D2634(int *param_1,int *param_2);
extern int func_003D26EC(undefined4 *param_1);
extern int func_003D2704(int *param_1,int *param_2,ushort *param_3);
extern int func_005642E4(uint *param_1,uint *param_2);
extern int func_00564314(int param_1);
extern int func_00564368(uint *param_1,uint *param_2);
extern int func_0068F324(int param_1,undefined4 *param_2,undefined4 *param_3,uint *param_4,uint *param_5, uint param_6);
extern int func_0068F55C(uint *param_1,uint *param_2,uint *param_3,undefined4 *param_4,uint param_5, undefined4 param_6,undefined4 param_7,ushort *param_8);
extern int func_0068F9A8(uint *param_1,uint *param_2,undefined4 *param_3,uint *param_4);
extern uint DAT_0068f97c;

// USA 0068F5E8 <- EU 0068F5C0 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:4 ushort *
// GLOBAL DAT_0068f97c uint

/* WARNING: Variable defined which should be unmapped: objStack_a8 */
/* WARNING: Variable defined which should be unmapped: objStack_a4 */

uint func_0068F5E8(uint *param_1,uint *param_2,ushort *param_3,uint *param_4,int param_5,
                  ushort *param_6)

{
  uint *puVar1;
  uint auVar2 [1];
  uint auVar3 [1];
  short *psVar4;
  short *psVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  short *psVar9;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define objStack_a8 ((uint *)(albw_frame + 0x8))
  #define objStack_a4 ((uint *)(albw_frame + 0xc))
  #define local_a0 (*(short * *)(albw_frame + 0x10))
  #define local_9c (*(short * *)(albw_frame + 0x14))
  #define uStack_98 (*(uint *)(albw_frame + 0x18))
  #define local_94 (*(short * *)(albw_frame + 0x1c))
  #define local_90 (*(ushort * *)(albw_frame + 0x20))
  #define local_7c (*(uint *)(albw_frame + 0x34))
  #define psStack_78 (*(short * *)(albw_frame + 0x38))
  #define local_74 (*(uint * *)(albw_frame + 0x3c))
  #define local_70 (*(short ** *)(albw_frame + 0x40))
  #define auStack_68 ((uint *)(albw_frame + 0x48))
  #define local_58 (*(undefined4 *)(albw_frame + 0x58))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0x5c))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x60))
  #define local_4c (*(uint * *)(albw_frame + 0x64))
  #define local_48 (*(uint *)(albw_frame + 0x68))
  #define local_44 (*(ushort * *)(albw_frame + 0x6c))
  #define auStack_40 ((undefined4 *)(albw_frame + 0x70))
  #define local_34 (*(uint * *)(albw_frame + 0x7c))
  #define puStack_30 (*(uint * *)(albw_frame + 0x80))
  #define local_2c (*(ushort * *)(albw_frame + 0x84))
  #define puStack_28 (*(uint * *)(albw_frame + 0x88))
  local_34 = param_1;
  puStack_30 = param_2;
  local_2c = param_3;
  puStack_28 = param_4;
  func_003D26EC(auStack_68);
  uVar6 = func_003D25C8(auStack_68,(short *)param_6);
  if ((int)uVar6 < 0) {
    return uVar6;
  }
  psVar9 = (short *)0x0;
  local_74 = auStack_68;
  local_4c = local_34;
  local_90 = local_2c;
  local_9c = (short *)0x0;
  objStack_a8[0] = 0;
  uVar6 = func_003D2634((int *)local_74,(int *)objStack_a4);
  psVar5 = local_94;
  if (-1 < (int)uVar6) {
    uVar6 = func_0068F9A8(local_4c,(uint *)&local_9c,&local_58,objStack_a8);
    psVar5 = local_94;
    while (auVar2[0] = objStack_a8[0], auVar3[0] = objStack_a4[0], psVar4 = local_a0,
          local_94 = local_9c, -1 < (int)uVar6) {
      while( true ) {
        do {
          local_a0 = psVar4;
          objStack_a4[0] = auVar3[0];
          objStack_a8[0] = auVar2[0];
          psVar4 = local_a0;
          auVar3[0] = objStack_a4[0];
          auVar2[0] = objStack_a8[0];
          if ((char)local_74[3] != '\0') {
            *param_2 = objStack_a8[0];
            param_2[1] = objStack_a4[0];
            param_2[2] = (uint)local_a0;
            *(undefined4 *)local_90 = local_58;
            *(undefined4 *)(local_90 + 2) = uStack_54;
            *(undefined4 *)(local_90 + 4) = uStack_50;
            uVar6 = 0;
            psVar9 = local_94;
            psVar5 = local_94;
            goto LAB_0068f684;
          }
          uVar6 = func_003D2634((int *)local_74,(int *)objStack_a4);
          puVar1 = local_4c;
          psVar5 = local_94;
          if ((int)uVar6 < 0) goto LAB_0068f684;
        } while ((objStack_a4[0] == 1) && (*local_a0 == 0x2e));
        if ((objStack_a4[0] != 2) || ((*local_a0 != 0x2e || (local_a0[1] != 0x2e)))) break;
        uVar6 = DAT_0068f97c;
        if (local_94 == (short *)0x0) goto LAB_0068f684;
        local_70 = &local_94;
        local_44 = param_6;
        local_7c = objStack_a4[0];
        psStack_78 = local_a0;
        uVar6 = func_0068F324((int)local_4c,&local_48,auStack_40,(uint *)0x0,(uint *)0x0,
                              objStack_a8[0]);
        if (-1 < (int)uVar6) {
          objStack_a8[0] = local_48;
          uVar6 = func_003D2704((int *)objStack_a4,(int *)&local_7c,local_44);
          if ((-1 < (int)uVar6) &&
             (uVar6 = func_0068F9A8(puVar1,(uint *)local_70,&local_58,objStack_a8),
             (uVar6 & 0x80000000) == 0)) {
            uVar6 = 0;
          }
        }
        auVar2[0] = objStack_a8[0];
        auVar3[0] = objStack_a4[0];
        psVar4 = local_a0;
        psVar5 = local_94;
        if ((int)uVar6 < 0) goto LAB_0068f684;
      }
      objStack_a8[0] = (uint)local_94;
      uVar6 = func_0068F9A8(local_4c,(uint *)&local_9c,&local_58,objStack_a8);
      psVar5 = local_94;
    }
  }
LAB_0068f684:
  local_94 = psVar5;
  if ((int)uVar6 < 0) {
    return uVar6;
  }
  if (param_5 != 0) {
    uVar6 = func_00564368(auStack_68,(uint *)&local_a0);
    if ((int)uVar6 < 0) {
      return uVar6;
    }
    if (local_a0 == (short *)0x1) {
      if (*local_9c == 0x2e) {
        objStack_a8[0] = param_2[2];
        uVar6 = *param_2;
        uVar8 = param_2[1];
        param_4[2] = objStack_a8[0];
        *param_4 = uVar6;
        param_4[1] = uVar8;
        if (uVar6 == 0) {
          return 0;
        }
        objStack_a4[0] = (uint)param_6;
        uVar6 = func_0068F55C(local_34,&uStack_98,param_2,(undefined4 *)local_2c,uVar6,uVar8,
                              objStack_a8[0],param_6);
        goto joined_r0x0068f96c;
      }
    }
    else if (((local_a0 == (short *)0x2) && (*local_9c == 0x2e)) && (local_9c[1] == 0x2e)) {
      if (psVar9 == (short *)0x0) {
        return DAT_0068f97c;
      }
      objStack_a4[0] = (uint)param_6;
      objStack_a8[0] = param_2[2];
      uVar6 = func_0068F55C(local_34,&uStack_98,param_4,&local_94,*param_2,param_2[1],objStack_a8[0]
                            ,param_6);
      if ((int)uVar6 < 0) {
        return uVar6;
      }
      if (*param_4 == 0) {
        return 0;
      }
      objStack_a4[0] = (uint)param_6;
      objStack_a8[0] = param_4[2];
      uVar6 = func_0068F55C(local_34,&uStack_98,param_2,(undefined4 *)local_2c,*param_4,param_4[1],
                            objStack_a8[0],param_6);
      goto joined_r0x0068f96c;
    }
    param_4[1] = (uint)local_a0;
    param_4[2] = (uint)local_9c;
    if (local_a0 == (short *)0x0) {
      psVar9 = (short *)0x0;
    }
    *param_4 = (uint)psVar9;
    return 0;
  }
  iVar7 = func_00564314((int)auStack_68);
  if (iVar7 != 0) {
    return DAT_0068f97c;
  }
  *param_4 = (uint)psVar9;
  uVar6 = func_005642E4(auStack_68,param_4 + 1);
joined_r0x0068f96c:
  if (-1 < (int)uVar6) {
    return 0;
  }
  return uVar6;
}

