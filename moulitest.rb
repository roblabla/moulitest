require 'formula'

class Moulitest < Formula
	homepage "https://www.gnu.org/software/wget/"
	url "https://github.com/yyang42/moulitest/archive/v4.zip"
	sha1 "fe8d99a91966dc9fda0dd449b4127a434f383670"
	version "0.4.3"

	def install
		bin.install "src/moulitest"
		(prefix).install "src"
	end
end
