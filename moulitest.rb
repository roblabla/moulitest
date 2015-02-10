require 'formula'

class Moulitest < Formula
	homepage "https://www.gnu.org/software/wget/"
	url "https://github.com/yyang42/moulitest/archive/fw.zip"
	sha1 ""
	version "0.4.19"

	def install
		bin.install "src/moulitest"
		(prefix).install "src"
	end
end
