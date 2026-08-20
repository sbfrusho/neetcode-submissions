class Solution {
    public int findDuplicate(int[] nums) {
        // int res = 0;
        // Map<Integer,Integer>mp = new HashMap<>();
        // for(int i = 0 ; i < nums.length ; i++) {
        //     mp.put(nums[i], mp.getOrDefault(nums[i], 0) + 1);
        //     if(mp.get(nums[i]) > 1) {
        //         res = nums[i];
        //         break;
        //     }
        // }

        //     return res;

        int slow = nums[0];
        int fast = nums[0];

        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while(slow != fast);

        int slow2 = nums[0];
        while(slow != slow2) {
            slow = nums[slow];
            slow2 = nums[slow2];
        }

        return slow;

    }
}

