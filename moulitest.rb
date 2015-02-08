require 'formula'

class Moulitest < Formula
	homepage "https://www.gnu.org/software/wget/"
	url "https://github.com/yyang42/moulitest/archive/v4.zip"
	sha1 ""
	version "0.4.1"

	def install
		bin.install "moulitest"
		(prefix).install "src"
	end
end
