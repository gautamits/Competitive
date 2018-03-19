class Solution
    # @param a : integer
    # @return an array of integers
    def is_prime?(n)
        ((2..(Math.sqrt(n)))).each do |i|
            return false if n % i == 0
        end
        return true
    end
    def primesum(a)
        for i in (2..a).step(1) do
            if is_prime?(i) and is_prime?(a-i)
                return [i,a-i]
            end
        end


    end
end
