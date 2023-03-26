pub struct Player {
    pub health: u32,
    pub mana: Option<u32>,
    pub level: u32,
}

impl Player {
    pub fn revive(&self) -> Option<Player> {
        if self.health <= 0 {
            Some(Self {
                health: 100,
                mana: if self.level >= 10 { Some(100) } else { None },
                level: self.level,
            })
        } else {
            None
        }
    }

    pub fn cast_spell(&mut self, mana_cost: u32) -> u32 {
        match self.mana {
            Some(t) => {
                if mana_cost > t {
                    return 0;
                } else {
                    self.mana = Some(t - mana_cost);
                    return mana_cost * 2;
                }
            }

            None => {
                if mana_cost > self.health {
                    self.health = 0;
                } else {
                    self.health -= mana_cost;
                }

                return 0;
            }
        }
    }
}
