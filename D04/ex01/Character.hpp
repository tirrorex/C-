class Character
{
	private:
	[...]
	public:
	Character(std::string const & name);
	[...]
	~Character();
	void recoverAP();
	void equip(AWeapon*);
	void attack(Enemy*);
	std::string [...] getName() const;
};